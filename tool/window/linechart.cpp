#include "linechart.h"
#include "ui_linechart.h"

LineChart::LineChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LineChart)
{
    ui->setupUi(this);
}

LineChart::~LineChart()
{
    delete ui;
}
