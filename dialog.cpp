#include "dialog.h"
#include "./ui_dialog.h"
//using namespace Qt;
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_sgmush_clicked()
{


    // Writes length of an eqvation
    QFile file("/usr/lib/TinyCalc/lineheight.txt");
    if(!file.open(QIODevice::WriteOnly))
    {
        qCritical() << file.errorString();
        return;
    }

    QTextStream stream(&file);
    stream << ui->wromv->text().length();

    file.close();

    // Wries eqvation
    QFile file1("/usr/lib/TinyCalc/eqv.txt");
    if (!file1.open(QIODevice::WriteOnly))
    {
        qCritical() << file1.errorString();
        return;
    }

    QTextStream strem1(&file1);
    strem1 << ui->wromv->text();

    file1.close();

    system("python /usr/lib/TinyCalc/calculator.py");

    // Gives answer
    QFile file2("/usr/lib/TinyCalc/ans.txt");
    if (!file2.open(QIODevice::ReadOnly))
    {
        qCritical() << file1.errorString();
        return;
    }

    QTextStream strem2(&file2);

    QString dataz = strem2.readAll();
    qInfo() << dataz;
    ui->wromv_2->setText(dataz);




    file2.close();
}

