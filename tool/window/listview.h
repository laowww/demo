#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QStyledItemDelegate>
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>

namespace Ui {
class ListView;
}

class CloseButtonDelegate : public QStyledItemDelegate
{
public:
    CloseButtonDelegate(QObject* parent = nullptr) : QStyledItemDelegate(parent) {}

    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override
    {
        QStyledItemDelegate::paint(painter, option, index);

        // 绘制关闭按钮
        QRect closeButtonRect = option.rect.adjusted(option.rect.width() - 20, 2, -2, -2);
        painter->drawImage(closeButtonRect, QImage(":/other/close.png"));
    }

    bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override
    {
        QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
        // 判断点击是否在关闭按钮内
        QRect closeButtonRect = option.rect.adjusted(option.rect.width() - 20, 2, -2, -2);
        if (closeButtonRect.contains(mouseEvent->pos()))
        {
            if (event->type() == QEvent::MouseButtonPress)
            {
                if (mouseEvent->button() == Qt::LeftButton)
                {
                    model->removeRow(index.row());
                }
            }

            return true;
        }

        return QStyledItemDelegate::editorEvent(event, model, option, index);
    }
};

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
    void initListWidget();
    void initListViewIcon();
    void initListViewChecked();
    void initListViewCustomWidget();

private:
    Ui::ListView *ui;

    QStandardItemModel *m_pModel;
    QStandardItemModel *m_pModel2;
    QStandardItemModel *m_pModel3;
};

#endif // LISTVIEW_H
