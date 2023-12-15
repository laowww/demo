#ifndef FRAMELESSWINDOW_H
#define FRAMELESSWINDOW_H

#include <QWidget>

class FrameLessWindow : public QWidget
{
    Q_OBJECT
public:
    FrameLessWindow(QWidget *parent = nullptr);

protected:
    void setMoveWidget(QWidget *pWdt);

protected:
    bool eventFilter(QObject *watch, QEvent *e);
    bool event(QEvent *e);

    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    enum eResize
    {
        none        = 0x0,
        top         = 0x1,
        right       = 0x2,
        bottom      = 0x4,
        left        = 0x8,
        topLeft     = 0x1|0x8,
        topRight    = 0x1|0x2,
        bottomLeft  = 0x4|0x8,
        bottomRight = 0x4|0x2
    };

private:
    bool m_bPress;
    eResize m_action;

    bool m_bMove;
    QPoint m_pressPos;
    QWidget *m_pMoveWdt;
};

#endif // FRAMELESSWINDOW_H
