#include "to_do.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TO_DO w;
    w.show();
    return a.exec();
}
