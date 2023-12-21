/********************************************************************************
** Form generated from reading UI file 'listview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTVIEW_H
#define UI_LISTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListView
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QListView *listView;
    QListView *listView_2;
    QListView *listView_3;

    void setupUi(QWidget *ListView)
    {
        if (ListView->objectName().isEmpty())
            ListView->setObjectName(QString::fromUtf8("ListView"));
        ListView->resize(550, 393);
        gridLayout = new QGridLayout(ListView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(ListView);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setDragEnabled(true);
        listWidget->setDragDropMode(QAbstractItemView::DragDrop);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        listView = new QListView(ListView);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 0, 1, 1, 1);

        listView_2 = new QListView(ListView);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        gridLayout->addWidget(listView_2, 1, 0, 1, 1);

        listView_3 = new QListView(ListView);
        listView_3->setObjectName(QString::fromUtf8("listView_3"));

        gridLayout->addWidget(listView_3, 1, 1, 1, 1);


        retranslateUi(ListView);

        QMetaObject::connectSlotsByName(ListView);
    } // setupUi

    void retranslateUi(QWidget *ListView)
    {
        ListView->setWindowTitle(QApplication::translate("ListView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ListView: public Ui_ListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTVIEW_H
