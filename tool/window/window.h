#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QToolButton>

namespace Ui
{
    class Window;
}

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

private:
    void init();

private:
    Ui::Window *ui;

    QList<QToolButton*> m_btns;
};

#endif // WINDOW_H
