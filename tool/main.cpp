#include "widget.h"
#include "toolutil.h"

#include <QFile>
#include <QDebug>
#include <QTextCodec>
#include <QSplashScreen>
#include <QApplication>

void loadQss()
{
    QString path = qApp->applicationDirPath() + "/stylesheet/stylesheet.qss";
    QFile file(path);
    if(file.open(QIODevice::ReadOnly))
    {
        qApp->setStyleSheet(file.readAll());
        file.close();
    }
}

void setCodec()
{
    QTextCodec *pCodec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForCStrings(pCodec);
    QTextCodec::setCodecForLocale(pCodec);
    QTextCodec::setCodecForTr(pCodec);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen splash(QPixmap(":/other/splash.png"));
    splash.show();
    a.processEvents();

    setCodec();
    loadQss();
    initSql();

    Widget w;
    w.show();

    splash.finish(&w);
    return a.exec();
}
