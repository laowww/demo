#include <QLabel>
#include <QPushButton>

#include "listview.h"
#include "ui_listview.h"

ListView::ListView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListView)
{
    ui->setupUi(this);

    initListWidget();
    initListViewIcon();
    initListViewChecked();
    initListViewCustomWidget();
}

ListView::~ListView()
{
    delete ui;
}

void ListView::initListWidget()
{
    QFont font;
    font.setPixelSize(16);
    for (int i = 0; i < 20; i++)
    {
        QListWidgetItem *pItem = new QListWidgetItem("新建项目");
        pItem->setFont(font);

        if(i % 2 == 0)
        {
            pItem->setData(Qt::TextColorRole, QColor(Qt::green));
        }

        pItem->setIcon(QIcon(":/other/center_cyan"));
        ui->listWidget->addItem(pItem);
    }
    ui->listWidget->setSpacing(3);
    ui->listWidget->sortItems();

}

void ListView::initListViewIcon()
{
    QFont font;
    font.setPixelSize(16);
    m_pModel = new QStandardItemModel(this);
    ui->listView->setModel(m_pModel);
    for(int i = 0; i < 20; i++)
    {
        StandardItem *pItem = new StandardItem("新建项目");
        pItem->setFont(font);

        if(i % 2 != 0)
        {
            pItem->setData(1, Qt::UserRole + 11);
            pItem->setData(QColor(Qt::red), Qt::TextColorRole);
        }

        pItem->setIcon(QIcon(":/other/center_cyan"));
        m_pModel->appendRow(pItem);
    }

    ui->listView->setResizeMode(QListView::Adjust);
    ui->listView->setViewMode(QListView::IconMode);
    ui->listView->setFlow(QListView::LeftToRight);
    ui->listView->setWrapping(true);
    ui->listView->setSpacing(3);
    m_pModel->sort(0);
}

void ListView::initListViewChecked()
{
    QFont font;
    font.setPixelSize(16);
    m_pModel2 = new QStandardItemModel(this);
    for(int i = 0; i < 20; i++)
    {
         QStandardItem *pItem = new QStandardItem("新建项目");
         pItem->setFont(font);
         pItem->setCheckable(true);

         if(i % 2 == 0)
         {
             pItem->setCheckState(Qt::Checked);
         }

         m_pModel2->appendRow(pItem);
    }

    ui->listView_2->setModel(m_pModel2);
    ui->listView_2->setSpacing(3);
}

void ListView::initListViewCustomWidget()
{
    QFont font;
    font.setPixelSize(16);
    m_pModel3 = new QStandardItemModel(this);
    ui->listView_3->setModel(m_pModel3);
    for(int i = 0; i < 20; i++)
    {
        QStandardItem *pItem = new QStandardItem("新建项目");
        pItem->setFont(font);
        m_pModel3->appendRow(pItem);
    }

    ui->listView_3->setItemDelegate(new CloseButtonDelegate);
    ui->listView_3->setSpacing(3);
}
