#include <QDebug>
#include <QEvent>
#include <QMouseEvent>
#include <QApplication>

#include "framelesswindow.h"

#define MARGIN 10

FrameLessWindow::FrameLessWindow(QWidget *parent)
    : QWidget(parent)
    , m_bPress(false)
    , m_bMove(false)
    , m_pMoveWdt(NULL)
{
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_Hover);
}

void FrameLessWindow::setMoveWidget(QWidget *pWdt)
{
    if(m_pMoveWdt != NULL)
    {
        m_pMoveWdt->removeEventFilter(this);
    }

    m_pMoveWdt = pWdt;
    m_pMoveWdt->installEventFilter(this);
}

bool FrameLessWindow::eventFilter(QObject *watch, QEvent *e)
{
    if(m_pMoveWdt && watch == m_pMoveWdt)
    {
        QMouseEvent *pMouseEvent = static_cast<QMouseEvent *>(e);
        if(pMouseEvent->type() == QMouseEvent::MouseButtonPress
            && pMouseEvent->button() == Qt::LeftButton
            && !this->isMaximized() && m_action == none)
        {
            m_bMove = true;
            m_pressPos = pMouseEvent->globalPos() - pos();
        }
        else if(pMouseEvent->type() == QMouseEvent::MouseMove && m_bMove)
        {
            move(pMouseEvent->globalPos() - m_pressPos);
        }
        else if(pMouseEvent->type() == QMouseEvent::MouseButtonRelease)
        {
            m_bMove = false;
        }
    }

    return QWidget::eventFilter(watch, e);
}

bool FrameLessWindow::event(QEvent *e)
{
    if(e->type() == QEvent::HoverMove)
    {
        QHoverEvent *hover = static_cast<QHoverEvent *>(e);
        QMouseEvent mouseEvent(QEvent::MouseMove, hover->pos(), Qt::NoButton, Qt::NoButton, Qt::NoModifier);
        mouseMoveEvent(&mouseEvent);
    }

    return QWidget::event(e);
}

void FrameLessWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        m_bPress = true;
    }

    QWidget::mousePressEvent(e);
}

void FrameLessWindow::mouseMoveEvent(QMouseEvent *e)
{
    int leftMargin = e->globalX() - frameGeometry().left();
    int rightMargin = e->globalX() - frameGeometry().right();
    int topMargin = e->globalY() - frameGeometry().top();
    int bottomMargin = e->globalY() - frameGeometry().bottom();

    if(m_bPress)
    {
        QRect _geometry = geometry();
        if(m_action & top)
        {
            QRect rect = geometry();
            rect.setTop(e->globalY());
            if(rect.height() > minimumHeight() && rect.height() < maximumHeight())
            {
                _geometry.setTop(e->globalY());
            }
        }
        else if(m_action & bottom)
        {
            QRect rect = geometry();
            rect.setBottom(e->globalY());
            if(rect.height() > minimumHeight() && rect.height() < maximumHeight())
            {
                _geometry.setBottom(e->globalY());
            }
        }

        if(m_action & left)
        {
            QRect rect = geometry();
            rect.setLeft(e->globalX());
            if(rect.width() > minimumWidth() && rect.width() < maximumWidth())
            {
                _geometry.setLeft(e->globalX());
            }
        }
        else if(m_action & right)
        {
            QRect rect = geometry();
            rect.setRight(e->globalX());
            if(rect.width() > minimumWidth() && rect.width() < maximumWidth())
            {
                _geometry.setRight(e->globalX());
            }
        }

        setGeometry(_geometry);
    }
    else
    {
        Qt::CursorShape cursorShape;
        if(topMargin < MARGIN && topMargin >= 0)
        {
            if(leftMargin < MARGIN && leftMargin >= 0)
            {
                m_action = topLeft;
                cursorShape = Qt::SizeFDiagCursor;
            }
            else if(abs(rightMargin) < MARGIN && rightMargin <= 0)
            {
                m_action = topRight;
                cursorShape = Qt::SizeBDiagCursor;
            }
            else
            {
                m_action = top;
                cursorShape = Qt::SizeVerCursor;
            }
        }
        else if(abs(bottomMargin) < MARGIN && bottomMargin <= 0)
        {
            if(leftMargin < MARGIN && leftMargin >= 0)
            {
                m_action = bottomLeft;
                cursorShape = Qt::SizeBDiagCursor;
            }
            else if(abs(rightMargin) < MARGIN && rightMargin <= 0)
            {
                m_action = bottomRight;
                cursorShape = Qt::SizeFDiagCursor;
            }
            else
            {
                m_action = bottom;
                cursorShape = Qt::SizeVerCursor;
            }
        }
        else if(abs(leftMargin) < MARGIN)
        {
            m_action = left;
            cursorShape = Qt::SizeHorCursor;
        }
        else if(abs(rightMargin) < MARGIN)
        {
            m_action = right;
            cursorShape = Qt::SizeHorCursor;
        }
        else{
            m_action = none;
            cursorShape = Qt::ArrowCursor;
        }

        setCursor(cursorShape);
    }
}

void FrameLessWindow::mouseReleaseEvent(QMouseEvent *e)
{
    m_bPress = false;
}
