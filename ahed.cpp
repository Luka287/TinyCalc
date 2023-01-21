#include "ahed.h"

ahed::ahed(QObject *parent)
    : QObject{parent}
{

}

void ahed::givetext()
{
    QTextStream print(stdout);


    std::ifstream infile;
    infile.open("dialog.cpp");

    char data[100];

    infile >> data;
    print << data;
    std::cout << data;

    infile >> data;
    std::cout << data;
    print << data;

    print << "this is test";


    infile.close();


}
