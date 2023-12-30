/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "window.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *wdt_title;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_icon;
    QLabel *lb_title;
    QSpacerItem *horizontalSpacer;
    QToolButton *tb_wdt;
    QGridLayout *gridLayout;
    QPushButton *btn_max;
    QPushButton *btn_min;
    QPushButton *btn_close;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    Window *wdt_window;
    QWidget *page_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wdt_title = new QWidget(Widget);
        wdt_title->setObjectName(QString::fromUtf8("wdt_title"));
        wdt_title->setMaximumSize(QSize(16777215, 70));
        horizontalLayout = new QHBoxLayout(wdt_title);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);
        lb_icon = new QLabel(wdt_title);
        lb_icon->setObjectName(QString::fromUtf8("lb_icon"));
        lb_icon->setMaximumSize(QSize(25, 25));
        lb_icon->setPixmap(QPixmap(QString::fromUtf8(":/image.png")));
        lb_icon->setScaledContents(true);

        horizontalLayout->addWidget(lb_icon);

        lb_title = new QLabel(wdt_title);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        lb_title->setFont(font);

        horizontalLayout->addWidget(lb_title);

        horizontalSpacer = new QSpacerItem(589, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tb_wdt = new QToolButton(wdt_title);
        tb_wdt->setObjectName(QString::fromUtf8("tb_wdt"));
        tb_wdt->setMinimumSize(QSize(85, 65));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb_wdt->setIcon(icon);
        tb_wdt->setIconSize(QSize(40, 40));
        tb_wdt->setCheckable(true);
        tb_wdt->setChecked(true);
        tb_wdt->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tb_wdt->setProperty("TabBtn", QVariant(true));

        horizontalLayout->addWidget(tb_wdt);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setContentsMargins(50, -1, -1, -1);
        btn_max = new QPushButton(wdt_title);
        btn_max->setObjectName(QString::fromUtf8("btn_max"));
        btn_max->setProperty("Max", QVariant(false));

        gridLayout->addWidget(btn_max, 0, 1, 1, 1);

        btn_min = new QPushButton(wdt_title);
        btn_min->setObjectName(QString::fromUtf8("btn_min"));

        gridLayout->addWidget(btn_min, 0, 0, 1, 1);

        btn_close = new QPushButton(wdt_title);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        gridLayout->addWidget(btn_close, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addWidget(wdt_title);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        wdt_window = new Window();
        wdt_window->setObjectName(QString::fromUtf8("wdt_window"));
        stackedWidget->addWidget(wdt_window);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        verticalLayout->setStretch(1, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        lb_icon->setText(QString());
        lb_title->setText(QApplication::translate("Widget", "ToolBox", 0, QApplication::UnicodeUTF8));
        tb_wdt->setText(QApplication::translate("Widget", "\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        btn_max->setText(QString());
        btn_min->setText(QString());
        btn_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
