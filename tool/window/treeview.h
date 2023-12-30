#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QDebug>
#include <QWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>

#include "pinyin.h"

namespace Ui {
class TreeView;
}

class PinyinProxyModel : public QSortFilterProxyModel
{
public:
    PinyinProxyModel(QObject *parent = NULL)
        : QSortFilterProxyModel(parent)
    {
    }

public:
    void filterPinyin(const QString &text)
    {
        m_text = text;
        invalidateFilter();
    }

protected:
    bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
    {
        if(source_parent != QModelIndex())
        {
            QModelIndex index = sourceModel()->index(source_row, filterKeyColumn(), source_parent);
            QString text = sourceModel()->data(index, Qt::DisplayRole).toString();

            if(isAllLetters(m_text))
            {
                QString sx;
                QString py;
                getComPingyinForStr(text, sx, py);

                if(sx.contains(m_text) || py.contains(m_text))
                {
                    return true;
                }
            }
            else
            {
                if(text.contains(m_text))
                {
                    return true;
                }
            }

            return false;
        }
        else
        {
            return true;
        }
    }

private:
    bool isAllLetters(const QString& str) const
    {
        const char *ch = str.toLatin1().data();
        while(*ch)
        {
            if(!((*ch>='A' && *ch<='Z') || (*ch>='a' && *ch<='z')))
            {
                return false;
            }
            ch++;
        }
        return true;
    }

private:
    QString m_text;
};

class TreeView : public QWidget
{
    Q_OBJECT

public:
    explicit TreeView(QWidget *parent = NULL);
    ~TreeView();

private:
    void initTreeView();
    void initTreeWidget();

private slots:
    void slot_search(const QString &);

private:
    Ui::TreeView *ui;

    QStandardItemModel *m_pModel;
    PinyinProxyModel *m_sortModel;
};

#endif // TREEVIEW_H
