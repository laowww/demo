﻿#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QWidget>
#include <QMetaType>
#include <QItemDelegate>
#include <QStandardItemModel>

namespace Ui {
class TableView;
}

struct st_data
{
    QString name;
    QString account;
    QString sex;
    QString dept;
    QString age;
};
Q_DECLARE_METATYPE(st_data)

class ItemDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    ItemDelegate(QObject *parent = NULL);

public:
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    void setEditorData(QWidget *editor, const QModelIndex &index) const;

    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

    bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
};

class TableView : public QWidget
{
    Q_OBJECT

    enum eColumn
    {
        eName = 0,
        eAccount = 1,
        eSex = 2,
        eAge = 3,
        eDept = 4,
        eCount = 5
    };

public:
    explicit TableView(QWidget *parent = NULL);
    ~TableView();

private:
    void init();

    void loadData();

    void insertItem(int row, int column, const QString &text);
    void insertHeadItem(int column, const QString &text);

    // 大批量数据时，分批查询
    void batchSelect(int page);

signals:
    void sign_data(QList<st_data> dataList);

private slots:
    void slot_btn_clicked_insert();

    void slot_pageChanged(int page);

    void slot_dataList(QList<st_data> dataList);

private:
    Ui::TableView *ui;

    int m_num;
    ItemDelegate *m_pItemDelegate;
    QStandardItemModel *m_pModel;
};

#endif // TABLEVIEW_H
