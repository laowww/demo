#include <QDebug>
#include <QMouseEvent>

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : FrameLessWindow(parent)
    , ui(new Ui::Widget)
    , m_bMax(false)
    , m_bPress(false)
{
    ui->setupUi(this);

    m_btnGroup.addButton(ui->tb_wdt);
    m_btnGroup.setExclusive(true);

    connect(ui->btn_close, SIGNAL(clicked()), this, SLOT(slot_btn_close()));
    connect(ui->btn_min, SIGNAL(clicked()), this, SLOT(slot_btn_min()));
    connect(ui->btn_max, SIGNAL(clicked()), this, SLOT(slot_btn_max()));

    setMoveWidget(ui->wdt_title);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slot_btn_close()
{
    qApp->quit();
}

void Widget::slot_btn_min()
{
    showMinimized();
}

void Widget::slot_btn_max()
{
    if(m_bMax)
    {
        showNormal();
    }
    else
    {
        showMaximized();
    }

    m_bMax = !m_bMax;
    ui->btn_max->setProperty("Max", m_bMax);
    style()->polish(ui->btn_max);
}

