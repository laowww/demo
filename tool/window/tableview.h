#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QWidget>

namespace Ui {
class TableView;
}

class TableView : public QWidget
{
    Q_OBJECT

public:
    explicit TableView(QWidget *parent = nullptr);
    ~TableView();

private:
    void init();

private slots:
    void slot_btn_clicked_insert();

private:
    Ui::TableView *ui;
};

#endif // TABLEVIEW_H
