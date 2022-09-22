#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <regex>
#include <iostream>
#include <string>
#include <QRegularExpression>
using namespace std;
//#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnValidar_clicked()
{

    QString pw;
    QRegularExpression re;
    pw=ui->txtPwd->text();
   //("Bereshit");



    re = QRegularExpression("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#\$%\^&\*])(?=.{8,})");
    QRegularExpressionMatch match = re.match(pw);
    bool encontrado = match.hasMatch(); // true

        if (encontrado) {
            ui->lblSalida->setText("Valid password!");
        }else{
             ui->lblSalida->setText("Invalid password! Try again . . .\n\n");



}


       }



