#include "Widget/MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
/*
    QSurfaceFormat format;
    format.setSamples(16);
    QSurfaceFormat::setDefaultFormat(format);
    */
/*
    Widget w;
    w.resize(700, 700);
    w.show();
*/
    MainWindow w;
    w.show();

    return a.exec();
}
