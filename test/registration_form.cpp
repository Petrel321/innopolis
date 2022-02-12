#include "registration_form.h"
#include "ui_registration_form.h"
#include "QMessageBox"



Registration_form::Registration_form(QSqlDatabase db, QSqlQuery *query, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration_form)
{
    ui->setupUi(this);

    this->setStyleSheet("color: white; background-color: #022140; font: 18px Roboto;");
    ui->lineEdit_login->setStyleSheet("background-color: #98A9C9;border-style: outset; border-width: 2px; border-radius: 10px;border-color: #E9AA08; max-width:180px; padding: 4px 2px;");
    ui->lineEdit_password->setStyleSheet("background-color: #98A9C9; border-style: outset;border-width: 2px; border-radius: 10px;border-color: #E9AA08; max-width:180px; padding: 4px 2px;");
    ui->lineEdit_confirm_password->setStyleSheet("background-color: #98A9C9; border-style: outset; border-width: 2px;border-radius: 10px;border-color: #E9AA08; max-width:180px; padding: 4px 2px;");
    ui->pushButton_back->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; max-width: 120px; margin: 0 auto; padding: 3px 6px;");
    ui->pushButton_registrate->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; max-width: 120px; margin: 0 auto; padding: 3px 6px;");
    ui->label_3->setWordWrap(true);
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

void Registration_form::delay()
{
    QTime dieTime= QTime::currentTime().addMSecs(30);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

int initialize_count(QSqlDatabase db){
    QSqlQuery *query = new QSqlQuery(db);
    int count = 1;
    query->exec("SELECT * FROM users");
    while (query->next()){
        count++;
    }
    return count;
}

void Registration_form::on_pushButton_registrate_clicked()
{
    query = new QSqlQuery(db);
    if(ui->checkBox->isChecked() && ui->lineEdit_login->text() != "" && ui->lineEdit_password->text() != "" && ui->lineEdit_confirm_password->text() != ""){
        if(ui->lineEdit_password->text() !=  ui->lineEdit_confirm_password->text()){
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
                   Registration_form::delay();
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
    Registration_form::delay();
    this->close();
}

void Registration_form::on_checkBox_clicked()
{
     QMessageBox::about(this, "123", "не забыть про фотку");
}

