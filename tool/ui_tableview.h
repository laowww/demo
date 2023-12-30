/********************************************************************************
** Form generated from reading UI file 'tableview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEVIEW_H
#define UI_TABLEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "pagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_TableView
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_account;
    QLineEdit *le_password;
    QSpinBox *sb_age;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *cb_sex;
    QLabel *label;
    QLineEdit *le_name;
    QComboBox *cb_dept;
    QPushButton *btn_insert;
    QTableView *tableView;
    PageWidget *wdt_page;

    void setupUi(QWidget *TableView)
    {
        if (TableView->objectName().isEmpty())
            TableView->setObjectName(QString::fromUtf8("TableView"));
        TableView->resize(613, 426);
        verticalLayout = new QVBoxLayout(TableView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(TableView);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(TableView);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        le_account = new QLineEdit(TableView);
        le_account->setObjectName(QString::fromUtf8("le_account"));

        gridLayout->addWidget(le_account, 0, 4, 1, 1);

        le_password = new QLineEdit(TableView);
        le_password->setObjectName(QString::fromUtf8("le_password"));

        gridLayout->addWidget(le_password, 0, 6, 1, 1);

        sb_age = new QSpinBox(TableView);
        sb_age->setObjectName(QString::fromUtf8("sb_age"));

        gridLayout->addWidget(sb_age, 1, 2, 1, 1);

        label_6 = new QLabel(TableView);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 5, 1, 1);

        label_3 = new QLabel(TableView);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        label_2 = new QLabel(TableView);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        cb_sex = new QComboBox(TableView);
        cb_sex->setObjectName(QString::fromUtf8("cb_sex"));

        gridLayout->addWidget(cb_sex, 1, 4, 1, 1);

        label = new QLabel(TableView);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(TableView);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        gridLayout->addWidget(le_name, 0, 2, 1, 1);

        cb_dept = new QComboBox(TableView);
        cb_dept->setObjectName(QString::fromUtf8("cb_dept"));

        gridLayout->addWidget(cb_dept, 1, 6, 1, 1);

        btn_insert = new QPushButton(TableView);
        btn_insert->setObjectName(QString::fromUtf8("btn_insert"));

        gridLayout->addWidget(btn_insert, 2, 6, 1, 1);


        verticalLayout->addLayout(gridLayout);

        tableView = new QTableView(TableView);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        wdt_page = new PageWidget(TableView);
        wdt_page->setObjectName(QString::fromUtf8("wdt_page"));

        verticalLayout->addWidget(wdt_page);


        retranslateUi(TableView);

        QMetaObject::connectSlotsByName(TableView);
    } // setupUi

    void retranslateUi(QWidget *TableView)
    {
        TableView->setWindowTitle(QApplication::translate("TableView", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TableView", "\345\271\264\351\276\204:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TableView", "\346\200\247\345\210\253:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TableView", "\351\203\250\351\227\250:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TableView", "\345\257\206\347\240\201:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TableView", "\350\264\246\345\217\267:", 0, QApplication::UnicodeUTF8));
        cb_sex->clear();
        cb_sex->insertItems(0, QStringList()
         << QApplication::translate("TableView", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TableView", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("TableView", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        btn_insert->setText(QApplication::translate("TableView", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TableView: public Ui_TableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEVIEW_H
