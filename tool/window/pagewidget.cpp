#include <QRegExpValidator>

#include "pagewidget.h"
#include "ui_pagewidget.h"

PageWidget::PageWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PageWidget)
    , m_pageCount(1)
    , m_currentPage(1)
{
    ui->setupUi(this);

    ui->lineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));

    connect(ui->btn_previous, SIGNAL(clicked()), this, SLOT(slot_btn_clicked_perviousPage()));
    connect(ui->btn_next, SIGNAL(clicked()), this, SLOT(slot_btn_clicked_nextPage()));
    connect(ui->btn_first, SIGNAL(clicked()), this, SLOT(slot_btn_clicked_firstPage()));
    connect(ui->btn_last, SIGNAL(clicked()), this, SLOT(slot_btn_clicked_lastPage()));
    connect(ui->btn_skip, SIGNAL(clicked()), this, SLOT(slot_btn_clicked_skipPage()));
}

PageWidget::~PageWidget()
{
    delete ui;
}

void PageWidget::setPageCount(int count)
{
    m_pageCount = count;
    m_pageCount = m_pageCount > 0 ? m_pageCount : 1;
    if(m_currentPage > m_pageCount)
    {
        m_currentPage = m_pageCount;
    }

    pageChanged();
}

void PageWidget::pageChanged()
{
    emit sign_pageChanged(m_currentPage);
    ui->label->setText(QString("%1/%2").arg(m_currentPage).arg(m_pageCount));
}

void PageWidget::slot_btn_clicked_perviousPage()
{
    if(m_currentPage > 1)
    {
        m_currentPage--;
        pageChanged();
    }
}

void PageWidget::slot_btn_clicked_nextPage()
{
    if(m_currentPage < m_pageCount)
    {
        m_currentPage++;
        pageChanged();
    }
}

void PageWidget::slot_btn_clicked_firstPage()
{
    if(m_currentPage != 1)
    {
        m_currentPage = 1;
        pageChanged();
    }
}

void PageWidget::slot_btn_clicked_lastPage()
{
    if(m_currentPage != m_pageCount)
    {
        m_currentPage = m_pageCount;
        pageChanged();
    }
}

void PageWidget::slot_btn_clicked_skipPage()
{
    int page = ui->lineEdit->text().toInt();
    ui->lineEdit->clear();
    if(page > 0 && page <= m_pageCount)
    {
        m_currentPage = page;
        pageChanged();
    }
}
