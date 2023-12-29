#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QWidget>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class TreeView;
}

class TreeView : public QWidget
{
    Q_OBJECT

public:
    explicit TreeView(QWidget *parent = nullptr);
    ~TreeView();

private:
    void initTreeView();
    void initTreeWidget();

private slots:
    void slot_search(const QString &);

private:
    Ui::TreeView *ui;

    QStandardItemModel *m_pModel;
};

#endif // TREEVIEW_H
