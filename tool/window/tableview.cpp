#include <QDebug>
#include <QUuid>
#include <QSqlQuery>
#include <QSqlError>
#include <QDateTime>
#include <QScrollArea>
#include <QCryptographicHash>
#include <QtConcurrentRun>
#include <QMessageBox>
#include <QMouseEvent>
#include <QMenu>

#include "tableview.h"
#include "ui_tableview.h"

TableView::TableView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableView)
    , m_num(200)
{
    ui->setupUi(this);

    qRegisterMetaType<QList<st_data>>("QList<st_data>");
    connect(ui->btn_insert, SIGNAL(clicked()), this, SLOT(slot_btn_clicked_insert()));
    connect(ui->wdt_page, SIGNAL(sign_pageChanged(int)), this, SLOT(slot_pageChanged(int)));
    connect(this, SIGNAL(sign_data(QList<st_data>)), this, SLOT(slot_dataList(QList<st_data>)), Qt::QueuedConnection);

    init();
}

TableView::~TableView()
{
    delete ui;
}

void TableView::init()
{
    ui->cb_dept->addItems(QStringList()<< "C++"<< "JAVA"<< "PYTHON");
    ui->sb_age->setRange(0, 100);
    ui->le_password->setEchoMode(QLineEdit::Password);

    m_pModel = new QStandardItemModel(this);
    insertHeadItem(eName, "名称");
    insertHeadItem(eAccount, "账号");
    insertHeadItem(eAge, "年龄");
    insertHeadItem(eSex, "性别");
    insertHeadItem(eDept, "部门");

    ui->tableView->setModel(m_pModel);
    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    m_pItemDelegate = new ItemDelegate(this);
    ui->tableView->setItemDelegate(m_pItemDelegate);

    loadData();
}

void TableView::loadData()
{
    QSqlQuery query;
    if(query.exec("select count(*) from user"))
    {
        if(query.next())
        {
            int page = query.value(0).toUInt();
            page = page > 0 ? page - 1 : 0;
            ui->wdt_page->setPageCount(page / m_num + 1);
        }
    }
}

void TableView::insertItem(int row, int column, const QString &text)
{
    QStandardItem *pItem = new QStandardItem(text);
    pItem->setTextAlignment(Qt::AlignCenter);
    m_pModel->setItem(row, column, pItem);
}

void TableView::insertHeadItem(int column, const QString &text)
{
    QStandardItem *pItem = new QStandardItem(text);
    pItem->setTextAlignment(Qt::AlignCenter);
    m_pModel->setHorizontalHeaderItem(column, pItem);
}

void TableView::batchSelect(int page)
{
    int num = 200 > m_num ? m_num : 200;
    int _page = page - 1;
    QSqlQuery query;
    for(int i = 0; i <= (m_num - 1) / num; i++)
    {
        QString sql = QString("select NAME, ACCOUNT, AGE, SEX, DEPT from USER order by DATE asc limit %1 offset %2").arg(num).arg((_page + i) * num);
        if(query.exec(sql))
        {
            int j = 0;
            QList<st_data> dataList;
            while(query.next())
            {
                st_data data;
                data.name = query.value(0).toString();
                data.account = query.value(1).toString();
                data.age = query.value(2).toString();
                data.sex = query.value(3).toString();
                data.dept = query.value(4).toString();
                dataList.append(data);
                j++;
            }
            emit sign_data(dataList);
        }
    }
}

void TableView::slot_btn_clicked_insert()
{
    QSqlQuery query;
    QString id = QUuid::createUuid().toString().replace("{", "").replace("}", "");
    QString name = ui->le_name->text();
    QString account = ui->le_account->text();
    QString password = ui->le_password->text();
    QString sex = ui->cb_sex->currentText();
    QString dept = ui->cb_dept->currentText();
    int age = ui->sb_age->value();

    QString sql = QString("insert into USER(ID, NAME, ACCOUNT, PASSWORD, AGE, SEX, DEPT, DATE) values('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8')")
            .arg(id).arg(name).arg(account).arg(QString(QCryptographicHash::hash(password.toLocal8Bit(), QCryptographicHash::Md5).toHex())).arg(age).arg(sex).arg(dept).arg(QDateTime::currentMSecsSinceEpoch());

    if(query.exec(sql))
    {
        qDebug()<< "insert User info success";
    }
    else
    {
        qDebug()<< "insert User info failed";
    }

    loadData();
}

void TableView::slot_pageChanged(int page)
{
    m_pModel->removeRows(0, m_pModel->rowCount());

    QtConcurrent::run(this, &TableView::batchSelect, page);

//    QSqlQuery query;
//    QString sql = QString("select NAME, ACCOUNT, AGE, SEX, DEPT from USER order by DATE asc limit %1 offset %2").arg(m_num).arg(--page * m_num);

//    if(query.exec(sql))
//    {
//        int i = 0;
//        while(query.next())
//        {
//            insertItem(i, eName, query.value(0).toString());
//            insertItem(i, eAccount, query.value(1).toString());
//            insertItem(i, eAge, query.value(2).toString());
//            insertItem(i, eSex, query.value(3).toString());
//            insertItem(i, eDept, query.value(4).toString());
//            i++;
//        }
//    }
//    else
//    {
//        qDebug()<< "select data failed";
    //    }
}

void TableView::slot_dataList(QList<st_data> dataList)
{
    int i = m_pModel->rowCount();
    foreach(st_data data, dataList)
    {
        insertItem(i, eName, data.name);
        insertItem(i, eAccount, data.account);
        insertItem(i, eAge, data.age);
        insertItem(i, eSex, data.sex);
        insertItem(i, eDept, data.dept);
        i++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
ItemDelegate::ItemDelegate(QObject *parent)
    : QItemDelegate(parent)
{
}

QWidget *ItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option)

    int column = index.column();
    if(column == 2)
    {
        QComboBox *pComboBox = new QComboBox(parent);
        pComboBox->addItems(QStringList()<< "男"<< "女");

        return pComboBox;
    }

    if(column == 3)
    {
        QSpinBox *pSpinBox = new QSpinBox(parent);
        pSpinBox->setRange(0, 100);

        return pSpinBox;
    }

    if(column == 4)
    {
        QComboBox *pComboBox = new QComboBox(parent);
        pComboBox->addItems(QStringList()<< "C++"<< "JAVA"<< "PYTHON");

        return pComboBox;
    }

    return NULL;
}

void ItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    int column = index.column();
    if(column == 2)
    {
        QComboBox *pComboBox = static_cast<QComboBox *>(editor);
        pComboBox->setCurrentIndex(pComboBox->findText(index.data().toString()));
    }

    if(column == 3)
    {
        QSpinBox *pSpinBox = static_cast<QSpinBox *>(editor);
        pSpinBox->setValue(index.data().toInt());
    }

    if(column == 4)
    {
        QComboBox *pComboBox = static_cast<QComboBox *>(editor);
        pComboBox->setCurrentIndex(pComboBox->findText(index.data().toString()));
    }
}

void ItemDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}

void ItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QItemDelegate::setModelData(editor, model, index);
}

bool ItemDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index)
{
    QMouseEvent *pMouseEvent = static_cast<QMouseEvent*>(event);
    if(pMouseEvent->button() == Qt::RightButton
       && pMouseEvent->type() == QEvent::MouseButtonPress)
    {
        QMenu menu;
        menu.addAction("删除");
        menu.exec(pMouseEvent->globalPos());

        return true;
    }

    return QItemDelegate::editorEvent(event, model, option, index);
}
