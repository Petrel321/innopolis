#include "registration_form.h"
#include "ui_registration_form.h"
#include "QMessageBox"



Registration_form::Registration_form(QSqlDatabase db, QSqlQuery *query, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration_form)
{
    ui->setupUi(this);
    this->db = db;
    if(!this->db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }
}

Registration_form::~Registration_form()
{
    delete ui;
}

void delay1()
{
    QTime dieTime= QTime::currentTime().addMSecs(30);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

int initialize_count(QSqlDatabase db){
    QSqlQuery *query = new QSqlQuery(db);
    int count = 0;
    query->exec("SELECT * FROM users");
    while (query->next()){
        count++;
    }
    return count;
}

void Registration_form::on_pushButton_registrate_clicked()
{
    query = new QSqlQuery(db);
    if(ui->checkBox->isChecked() && ui->lineEdit_login->text() != "" && ui->lineEdit_password->text()!= "" && ui->lineEdit_confirm_password->text()!= ""){
        if(ui->lineEdit_password->text()!=  ui->lineEdit_confirm_password->text()){
            QMessageBox::about(this, "Ошибка", "Пароли не совпадают");
        } else{
            query->prepare("INSERT INTO users (id, login, password) VALUES (:id, :login, :password)");
            query->bindValue(":id", initialize_count(db));
            query->bindValue(":login", ui->lineEdit_login->text());
            query->bindValue(":password", ui->lineEdit_password->text());

            if(!query->exec()){
                   qDebug() << "err";
                   QMessageBox::about(this, "Ошибка", "Совпадение логинов");
               } else{
                   qDebug() << "ok";
                   ui->lineEdit_login->clear();
                   ui->lineEdit_password->clear();
                   ui->lineEdit_confirm_password->clear();
                   emit mainWindow();
                   delay1();
                   this->close();
               }
        }
    } else{
        QMessageBox::about(this, "Ошибка", "Заполните все поля");
    }
}

void Registration_form::on_pushButton_back_clicked()
{
    ui->lineEdit_login->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_confirm_password->clear();
    emit mainWindow();
    delay1();
    this->close();
}
