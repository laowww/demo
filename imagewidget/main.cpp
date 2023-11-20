#include "imagewdt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageWdt w;
    w.show();
    return a.exec();
}
