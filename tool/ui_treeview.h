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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TreeView
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QTreeView *treeView;

    void setupUi(QWidget *TreeView)
    {
        if (TreeView->objectName().isEmpty())
            TreeView->setObjectName(QString::fromUtf8("TreeView"));
        TreeView->resize(538, 424);
        horizontalLayout = new QHBoxLayout(TreeView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        treeWidget = new QTreeWidget(TreeView);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        horizontalLayout->addWidget(treeWidget);

        treeView = new QTreeView(TreeView);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout->addWidget(treeView);


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
