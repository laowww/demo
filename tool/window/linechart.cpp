#include "linechart.h"
#include "qcustomplot.h"
#include "ui_linechart.h"

LineChart::LineChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LineChart)
{
    ui->setupUi(this);

    init();
}

LineChart::~LineChart()
{
    delete ui;
}

void LineChart::init()
{
    QCPTextElement *pTitle = new QCPTextElement(ui->plot, "title");
    pTitle->setTextColor(Qt::white);

    ui->plot->plotLayout()->insertRow(0);
    ui->plot->plotLayout()->addElement(0, 0, pTitle);

    ui->plot->setBackground(QBrush(QColor(61,61,61)));

    ui->plot->replot();
}
