#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QToolButton>
#include <QButtonGroup>

namespace Ui
{
    class Window;
}

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = NULL);

private:
    void init();

private slots:
    void slot_pageChanged(QAbstractButton *pBtn);

private:
    Ui::Window *ui;

    QButtonGroup m_btnGroup;
    QList<QToolButton *> m_btnList;
};

#endif // WINDOW_H
