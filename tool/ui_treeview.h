/********************************************************************************
** Form generated from reading UI file 'treeview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEVIEW_H
#define UI_TREEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeView
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QTreeView *treeView;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *TreeView)
    {
        if (TreeView->objectName().isEmpty())
            TreeView->setObjectName(QString::fromUtf8("TreeView"));
        TreeView->resize(538, 424);
        gridLayout = new QGridLayout(TreeView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(TreeView);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        treeView = new QTreeView(TreeView);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 1, 1, 1, 1);

        lineEdit = new QLineEdit(TreeView);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(TreeView);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);


        retranslateUi(TreeView);

        QMetaObject::connectSlotsByName(TreeView);
    } // setupUi

    void retranslateUi(QWidget *TreeView)
    {
        TreeView->setWindowTitle(QApplication::translate("TreeView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TreeView: public Ui_TreeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEVIEW_H
