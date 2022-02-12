#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include "QGraphicsDropShadowEffect"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("color: white; background-color: #022140; font: 18px Roboto;");
    ui->lineEdit_login->setStyleSheet("background-color: #98A9C9;border-style: outset; border-width: 2px; border-radius: 10px; border-color: #E9AA08; max-width:180px; margin-bottom: 8px; padding: 2px;");
    ui->lineEdit_password->setStyleSheet("background-color: #98A9C9;border-style: outset; border-width: 2px; border-radius: 10px; border-color: #E9AA08; max-width:180px; padding: 2px;");
    ui->pushButton_2->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; max-width: 120px; margin: 16px auto 4px; padding: 3px 6px;");
    ui->pushButton->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; max-width: 120px; margin: 0 auto; padding: 3px 6px;");

    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setXOffset(2);
    effect->setYOffset(2);
    effect->setColor("#7B4E4E");
    ui->pushButton_2->setGraphicsEffect(effect);

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

void MainWindow::delay()
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
            MainWindow::delay();
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
    MainWindow::delay();
    this->close();
}

