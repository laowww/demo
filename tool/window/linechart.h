#ifndef LINECHART_H
#define LINECHART_H

#include <QWidget>

namespace Ui {
class LineChart;
}

class LineChart : public QWidget
{
    Q_OBJECT

public:
    explicit LineChart(QWidget *parent = nullptr);
    ~LineChart();

private:
    Ui::LineChart *ui;
};

#endif // LINECHART_H
