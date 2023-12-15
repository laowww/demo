#include <QSpacerItem>

#include "window.h"
#include "ui_window.h"

Window::Window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);

    init();
}

void Window::init()
{
    QStringList names;
    names<< "ListView";

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
        m_btns.append(pBtn);
    }

    ui->verticalLayout->addStretch();
    m_btns.at(0)->click();
}
