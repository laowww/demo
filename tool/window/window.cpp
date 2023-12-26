#include <QSpacerItem>

#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);

    init();
    m_btnGroup.setExclusive(true);
    connect(&m_btnGroup, SIGNAL(buttonClicked(QAbstractButton *)), this, SLOT(slot_pageChanged(QAbstractButton *)));
}

void Window::init()
{
    QStringList names;
    names<< "ListView"<< "TreeView"<< "TableView";

    for(int i = 0; i < names.size(); i++)
    {
        QToolButton *pBtn = new QToolButton;
        pBtn->setFixedHeight(35);
        pBtn->setText(names.at(i));
        pBtn->setCheckable(true);
        pBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pBtn->setIcon(QIcon(":/other/star.png"));
        pBtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

        ui->verticalLayout->addWidget(pBtn);
        m_btnGroup.addButton(pBtn);
        m_btnList.append(pBtn);
    }

    ui->verticalLayout->addStretch();
    m_btnList.at(0)->click();
}

void Window::slot_pageChanged(QAbstractButton *pBtn)
{
    int index = m_btnList.indexOf(static_cast<QToolButton *>(pBtn));
    if(index != -1)
    {
        ui->stackedWidget->setCurrentIndex(index);
    }
}
