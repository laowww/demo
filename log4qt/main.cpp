#include "mainwindow.h"

#include <QDebug>
#include <QApplication>

#include "logger.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Logger::instance();

    MainWindow w;
    w.show();

    return a.exec();
}
