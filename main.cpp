#include <QtGui/QApplication>
#include "media.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    media w;
    w.show();

    return a.exec();
}
