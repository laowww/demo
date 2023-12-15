#include "listview.h"
#include "ui_listview.h"

ListView::ListView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListView)
{
    ui->setupUi(this);

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

   m_pModel = new QStandardItemModel(this);
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

   ui->listView->setModel(m_pModel);
   ui->listView->setSpacing(3);
   m_pModel->sort(0);

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

ListView::~ListView()
{
    delete ui;
}
