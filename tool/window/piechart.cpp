#include <qmath.h>
#include <QPainter>
#include <QMouseEvent>

#include "piechart.h"
#include "ui_piechart.h"

PieChart::PieChart(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PieChart)
    , m_explodedIndex(-1)
{
    ui->setupUi(this);

    setMouseTracking(true);
    init();
}

PieChart::~PieChart()
{
    delete ui;
}

void PieChart::init()
{
    QMap<QString, QPair<int, QColor> > map;
    map["test_1"].first = 3;
    map["test_1"].second = Qt::red;

    map["test_2"].first = 4;
    map["test_2"].second = Qt::gray;

    map["test_3"].first = 5;
    map["test_3"].second = Qt::green;

    map["test_4"].first = 6;
    map["test_4"].second = Qt::cyan;

    setDataList(map);
}

void PieChart::setData(const QString &text, const QPair<int, QColor> &data)
{
    m_dataList[text] = data;
}

void PieChart::setDataList(const QMap<QString, QPair<int, QColor> > &dataList)
{
    m_dataList = dataList;
}

void PieChart::mouseMoveEvent(QMouseEvent *e)
{
    double total = 0;
    foreach (QString key, m_dataList.keys())
    {
        QPair<int, QColor> data = m_dataList[key];
        total += data.first;
    }

    int startAngle = 30;
    int w = width();
    int h = height();
    int radius = qMin(w,h)*0.8;
    QRect rect(w / 2 - radius / 2, h / 2 - radius / 2, radius, radius);

    int i = 0;
    m_explodedIndex = -1;
    foreach (QString key, m_dataList.keys())
    {
        QPair<int, QColor> data = m_dataList[key];
        double value = data.first;
        value = value / total * 360;

        QPainterPath path;
        path.moveTo(w / 2, h / 2);
        path.lineTo(w / 2 + 120 * cos(startAngle * M_PI / 180),
                     h / 2 - 120 * sin(startAngle * M_PI / 180));
        path.arcTo(rect, startAngle, value);
        path.closeSubpath();

        if (path.contains(e->pos()))
        {
            m_explodedIndex = i;
            break;
        }
        startAngle += value;
        i++;
    }

    update();
}

void PieChart::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    drawPie(p);
}

void PieChart::drawPie(QPainter &painter)
{
    double total = 0;
    foreach (QString key, m_dataList.keys())
    {
        QPair<int, QColor> data = m_dataList[key];
        total += data.first;
    }

    int w = width();
    int h = height();
    int radius = qMin(w,h)*0.8;
    QRect rect(w / 2 - radius / 2,h / 2 - radius / 2, radius, radius);

    painter.save();
    {
        painter.setPen(Qt::NoPen);

        double index = 30; // 开始角度
        int i = 0;
        foreach (QString key, m_dataList.keys())
        {
            QPair<int, QColor> data = m_dataList[key];
            double value = data.first;
            value = value / total * 360;

            QRect newrect = rect;
            if (m_explodedIndex == i)
            {
                QPoint center = newrect.center();
                int midAngel = index + value / 2;

                QPoint tp = movePoint(midAngel);
                center += tp;
                newrect.moveCenter(center);

                // 圆心不弹出
                //newrect.adjust(-20, -20, 20, 20);
            }

            QPoint center = newrect.center();
            QColor color = data.second;
            QRadialGradient firstGradient(center, radius/2);

            //整圆
//            firstGradient.setColorAt(0, color.lighter(80));
//            firstGradient.setColorAt(1.0, color.darker(80));

            //圆环
            firstGradient.setColorAt(0, Qt::transparent);
            firstGradient.setColorAt(0.6, Qt::transparent);
            firstGradient.setColorAt(0.61, color.lighter(100));
            firstGradient.setColorAt(0.80, color.lighter(100));
            firstGradient.setColorAt(1.0, color.lighter(100));

            painter.setBrush(firstGradient);
            painter.drawPie(newrect, index * 16, value * 16);

            index += value;
            i++;
        }
    }
    painter.restore();
}

QPoint PieChart::movePoint(int angle)
{
    angle %= 360;

    int wl = 0;
    int hl = 0;
    qreal ang = (angle) * M_PI / 180;
    wl = 20 * qCos(ang);
    hl = 20 * qSin(ang);

    wl = (angle > 90 && angle < 270) ? qAbs(wl)*-1 : wl = qAbs(wl);
    hl = angle < 180 ? qAbs(hl)*-1 : hl = qAbs(hl);

    return QPoint(wl,hl);
}
