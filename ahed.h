#ifndef AHED_H
#define AHED_H

#include "dialog.h"
#include <QObject>
#include <QTextStream>
#include <fstream>
#include <iostream>

class ahed : public QObject
{
    Q_OBJECT
public:
    explicit ahed(QObject *parent = nullptr);

signals:

public slots:
    void givetext();


};

#endif // AHED_H
