/********************************************************************************
** Form generated from reading UI file 'pagewidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEWIDGET_H
#define UI_PAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_first;
    QPushButton *btn_previous;
    QLabel *label;
    QPushButton *btn_next;
    QPushButton *btn_last;
    QLineEdit *lineEdit;
    QPushButton *btn_skip;

    void setupUi(QWidget *PageWidget)
    {
        if (PageWidget->objectName().isEmpty())
            PageWidget->setObjectName(QString::fromUtf8("PageWidget"));
        PageWidget->resize(548, 74);
        horizontalLayout = new QHBoxLayout(PageWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_first = new QPushButton(PageWidget);
        btn_first->setObjectName(QString::fromUtf8("btn_first"));

        horizontalLayout->addWidget(btn_first);

        btn_previous = new QPushButton(PageWidget);
        btn_previous->setObjectName(QString::fromUtf8("btn_previous"));

        horizontalLayout->addWidget(btn_previous);

        label = new QLabel(PageWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        btn_next = new QPushButton(PageWidget);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));

        horizontalLayout->addWidget(btn_next);

        btn_last = new QPushButton(PageWidget);
        btn_last->setObjectName(QString::fromUtf8("btn_last"));

        horizontalLayout->addWidget(btn_last);

        lineEdit = new QLineEdit(PageWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        btn_skip = new QPushButton(PageWidget);
        btn_skip->setObjectName(QString::fromUtf8("btn_skip"));

        horizontalLayout->addWidget(btn_skip);


        retranslateUi(PageWidget);

        QMetaObject::connectSlotsByName(PageWidget);
    } // setupUi

    void retranslateUi(QWidget *PageWidget)
    {
        PageWidget->setWindowTitle(QApplication::translate("PageWidget", "Form", 0, QApplication::UnicodeUTF8));
        btn_first->setText(QApplication::translate("PageWidget", "\347\254\254\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btn_previous->setText(QApplication::translate("PageWidget", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PageWidget", "1/1", 0, QApplication::UnicodeUTF8));
        btn_next->setText(QApplication::translate("PageWidget", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btn_last->setText(QApplication::translate("PageWidget", "\346\234\200\345\220\216\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btn_skip->setText(QApplication::translate("PageWidget", "\350\267\263\350\275\254", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PageWidget: public Ui_PageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEWIDGET_H
