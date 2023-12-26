#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QWidget>
#include <QMetaType>
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
    explicit TableView(QWidget *parent = nullptr);
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
    QStandardItemModel *m_pModel;
};

#endif // TABLEVIEW_H
