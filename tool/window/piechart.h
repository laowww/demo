#ifndef PIECHART_H
#define PIECHART_H

#include <QMap>
#include <QPair>
#include <QWidget>

namespace Ui {
class PieChart;
}

class PieChart : public QWidget
{
    Q_OBJECT

public:
    explicit PieChart(QWidget *parent = NULL);
    ~PieChart();

    void init();

public:
    void setData(const QString &text, const QPair<int, QColor> &data);

    void setDataList(const QMap<QString, QPair<int, QColor> > &dataList);

protected:
    void mouseMoveEvent(QMouseEvent *e);

    void paintEvent(QPaintEvent *e);

    void drawPie(QPainter &p);

private:
    QPoint movePoint(int angle);

private:
    Ui::PieChart *ui;

    QMap<QString, QPair<int, QColor> > m_dataList;

    int m_explodedIndex;
};

#endif // PIECHART_H
