#ifndef PAGEWIDGET_H
#define PAGEWIDGET_H

#include <QWidget>

namespace Ui {
class PageWidget;
}

class PageWidget : public QWidget
{
    Q_OBJECT

public:
    PageWidget(QWidget *parent = NULL);
    ~PageWidget();

public:
    void setPageCount(int count);

    void pageChanged();

signals:
    void sign_pageChanged(int);

private slots:
    void slot_btn_clicked_perviousPage();
    void slot_btn_clicked_nextPage();
    void slot_btn_clicked_firstPage();
    void slot_btn_clicked_lastPage();
    void slot_btn_clicked_skipPage();

private:
    Ui::PageWidget *ui;

    int m_pageCount;
    int m_currentPage;
};

#endif // PAGEWIDGET_H
