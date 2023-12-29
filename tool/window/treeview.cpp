#include <QLabel>
#include <QDebug>

#include "pinyin.h"
#include "treeview.h"
#include "ui_treeview.h"

TreeView::TreeView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TreeView)
{
    ui->setupUi(this);

    QLabel *pLabel = new QLabel;
    QHBoxLayout *pLayout = new QHBoxLayout;
    pLabel->setPixmap(QPixmap(":/search.png").scaledToHeight(15));
    pLayout->addStretch();
    pLayout->setMargin(5);
    pLayout->addWidget(pLabel);
    ui->lineEdit->setLayout(pLayout);
    ui->lineEdit->setPlaceholderText("过滤");
    ui->lineEdit->setTextMargins(0, 0, 30, 0);

    connect(ui->lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(slot_search(const QString &)));

    initTreeView();
    initTreeWidget();
}

TreeView::~TreeView()
{
    delete ui;
}

void TreeView::initTreeView()
{
    m_pModel = new QStandardItemModel(this);
    ui->treeView->setModel(m_pModel);
    ui->treeView->header()->setVisible(false);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    QFont font;
    font.setPixelSize(16);
    for(int i = 0; i < 5; i++)
    {
        QStandardItem *pItem = new QStandardItem("item");
        pItem->setFont(font);
        m_pModel->appendRow(pItem);

        for(int j = 0; j < 3; j++)
        {
            QStandardItem *pChild = new QStandardItem("item_child");
            pChild->setFont(font);
            pItem->appendRow(pChild);
        }
    }
}

void TreeView::initTreeWidget()
{
    ui->treeWidget->header()->hide();

    QFont font;
    font.setPixelSize(16);
    for (int i = 0; i < 5; i++)
    {
        QTreeWidgetItem *pItem = new QTreeWidgetItem(QStringList()<<"item");
        pItem->setCheckState(0, Qt::Unchecked);
        pItem->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsTristate);
        pItem->setFont(0, font);
        ui->treeWidget->addTopLevelItem(pItem);

        for(int j = 0; j < 3; j++)
        {
            QTreeWidgetItem *pChild = new QTreeWidgetItem(QStringList()<<"item_child");
            pChild->setCheckState(0, Qt::Unchecked);
            pChild->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsTristate);
            pChild->setFont(0, font);
            pItem->addChild(pChild);
        }
    }

    ui->treeWidget->expandAll();
}

void TreeView::slot_search(const QString &text)
{
    QString firstStr;
    QString fullStr;
    getComPingyinForStr(text, firstStr, fullStr);

    qDebug()<< firstStr<< fullStr;
}
