#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    query = new QSqlQuery(db);


    db.setDatabaseName("./main.db");
    if(!db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }


    registration = new Registration_form(db, query);
    connect(registration, &Registration_form::mainWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void delay()
{
    QTime dieTime= QTime::currentTime().addMSecs(30);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::on_pushButton_clicked() {
    QString login = ui->lineEdit_login->text(), password = ui->lineEdit_password->text();
    query->exec("SELECT * FROM users");
    bool b = false;
    while(query->next()){
        if(login == query->value(1) && password == query->value(2)){
            qDebug() << "OK";
            b = true;
            ui->lineEdit_login->clear();
            ui->lineEdit_password->clear();

            acc = new account(db, query, query->value(0));
            connect(acc, &account::mainWindow, this, &MainWindow::show);

            acc->show();
            delay();
            this->close();
        }
    }
    if(!b){
        QMessageBox::about(this, "Ошибка", "Неверный логин или пароль");
        ui->lineEdit_login->clear();
        ui->lineEdit_password->clear();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    registration->show();
    delay();
    this->close();
}

