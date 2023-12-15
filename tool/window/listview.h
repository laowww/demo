#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QWidget>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class ListView;
}

class StandardItem : public QStandardItem
{
public:
    StandardItem(const QString &text)
        : QStandardItem(text)
    {}

    bool operator<(const QStandardItem &other) const
    {
        int a = other.data(Qt::UserRole + 11).toInt();
        int b = this->data(Qt::UserRole + 11).toInt();

        return (a < b);
    }
};

class ListView : public QWidget
{
    Q_OBJECT

public:
    explicit ListView(QWidget *parent = nullptr);
    ~ListView();

private:
    Ui::ListView *ui;

    QStandardItemModel *m_pModel;
    QStandardItemModel *m_pModel2;
};

#endif // LISTVIEW_H
