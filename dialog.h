#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QObject>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_sgmush_clicked();

private:
    Ui::Dialog *ui;

signals:
    void calculatos();
};
#endif // DIALOG_H
