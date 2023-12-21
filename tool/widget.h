#ifndef WIDGET_H
#define WIDGET_H

#include <QButtonGroup>

#include "framelesswindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public FrameLessWindow
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void slot_btn_close();
    void slot_btn_min();
    void slot_btn_max();

private:
    Ui::Widget *ui;

    bool m_bMax;
    bool m_bPress;
    QPoint m_pressPos;

    QButtonGroup m_btnGroup;
};
#endif // WIDGET_H
