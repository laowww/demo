#ifndef IMAGEWDT_H
#define IMAGEWDT_H

#include <QWidget>

class ImageWdt : public QWidget
{
    Q_OBJECT

public:
    ImageWdt(QWidget *parent = nullptr);
    ~ImageWdt();

    void setImage(const QPixmap &pixmap);

    void setFill(bool bFill);

protected:
    void paintEvent(QPaintEvent *e);

    void resizeEvent(QResizeEvent *e);

    void wheelEvent(QWheelEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    QPixmap m_pixmap;

    bool m_bFill;
    double m_scale;
};
#endif // IMAGEWDT_H
