#include "dialog.h"
#include "ahed.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog w;
    ahed b;

    w.show();


    QObject::connect(&w,&Dialog::calculatos,&b,&ahed::givetext,Qt::QueuedConnection);

    return a.exec();
}
