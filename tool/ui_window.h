/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QScrollArea>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "listview.h"
#include "tableview.h"
#include "treeview.h"

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *wdt_left;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    ListView *wdt_list;
    TreeView *wdt_tree;
    TableView *wdt_table;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(494, 383);
        horizontalLayout = new QHBoxLayout(Window);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(Window);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(200, 0));
        scrollArea->setMaximumSize(QSize(200, 16777215));
        scrollArea->setWidgetResizable(true);
        wdt_left = new QWidget();
        wdt_left->setObjectName(QString::fromUtf8("wdt_left"));
        wdt_left->setGeometry(QRect(0, 0, 198, 363));
        verticalLayout = new QVBoxLayout(wdt_left);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea->setWidget(wdt_left);

        horizontalLayout->addWidget(scrollArea);

        stackedWidget = new QStackedWidget(Window);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        wdt_list = new ListView();
        wdt_list->setObjectName(QString::fromUtf8("wdt_list"));
        stackedWidget->addWidget(wdt_list);
        wdt_tree = new TreeView();
        wdt_tree->setObjectName(QString::fromUtf8("wdt_tree"));
        stackedWidget->addWidget(wdt_tree);
        wdt_table = new TableView();
        wdt_table->setObjectName(QString::fromUtf8("wdt_table"));
        stackedWidget->addWidget(wdt_table);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
