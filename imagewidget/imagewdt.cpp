#include <QDebug>
#include <QPainter>
#include <QWheelEvent>

#include "imagewdt.h"

#define MAX_SCALE 10.0
#define MIN_SCALE 0.1

ImageWdt::ImageWdt(QWidget *parent)
    : QWidget(parent)
{
    m_bFill = false;
    m_scale = 1.0;

    setImage(QPixmap(":/1.png"));
}

ImageWdt::~ImageWdt()
{
}

void ImageWdt::setImage(const QPixmap &pixmap)
{
    m_pixmap = pixmap;
    m_bFill = false;
    m_scale = 1.0;

    update();
}

void ImageWdt::setFill(bool bFill)
{
    m_bFill = bFill;
    update();
}

void ImageWdt::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing);

    painter.save();
    {
        painter.translate(rect().center());
        painter.scale(m_scale, m_scale);

        if(m_bFill)
        {
            painter.drawPixmap(rect(), m_pixmap);
        }
        else
        {
            double width = this->width();
            double height = this->height();

            double imageWidth = m_pixmap.width();
            double imageHeight = m_pixmap.height();

            if(imageWidth > width || imageHeight > height)
            {
                if(width / imageWidth < height / imageHeight)
                {
                    imageHeight *= width / imageWidth;
                    imageWidth = width;
                }
                else
                {
                    imageWidth *= height / imageHeight;
                    imageHeight = height;
                }
            }

            int imageX = imageWidth / -2;
            int imageY = imageHeight / -2;

            painter.drawPixmap(QRect(imageX, imageY, imageWidth, imageHeight), m_pixmap);
        }
    }
    painter.restore();
}

void ImageWdt::resizeEvent(QResizeEvent *e)
{
    m_scale = 1.0;
    update();
}

void ImageWdt::wheelEvent(QWheelEvent *e)
{
    if(e->delta() > 0)
    {
        m_scale = m_scale * 1.2 > MAX_SCALE ? MAX_SCALE : m_scale * 1.2;
    }
    else
    {
        m_scale = m_scale * 0.8 < MIN_SCALE ? MIN_SCALE : m_scale * 0.8;
    }

    update();
}

void ImageWdt::mousePressEvent(QMouseEvent *e)
{

}

void ImageWdt::mouseMoveEvent(QMouseEvent *e)
{

}

void ImageWdt::mouseReleaseEvent(QMouseEvent *e)
{

}

