#ifndef TOOLUTIL_H
#define TOOLUTIL_H

#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

static bool initSql()
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE"); //创建一个数据库
    }

    db.setDatabaseName(QApplication::applicationDirPath() + "/data/data.sqlite"); //设置数据库的名字
    if(!db.open())
    {
        qDebug()<< "sql open faild";
        return false;
    }
    return true;
}

#endif // TOOLUTIL_H
