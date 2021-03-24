#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "syncretism.h"

#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <QDebug>
#include <QCoreApplication>
#include <QMainWindow>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qApp->setWindowIcon(QIcon("inf.ico"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_start_clicked()
{
    //ui->f1_edit->setText(tr("p(a,x,f(g(y)))"));
    string f1 =  ui->f1_edit->text().toStdString();
    //ui->f2_edit->setText(tr("p(z,f(z),f(u))"));
    string f2 = ui->f2_edit->text().toStdString();
    Syncretism Sy;
    vector<string> results = Sy.show(f1,f2);
    QString out = QString::fromStdString(results[1]);
    QString result = QString::fromStdString(results[0]);
    ui->out_edit->setText(out);
    ui->result_edit->setText(result);
}
