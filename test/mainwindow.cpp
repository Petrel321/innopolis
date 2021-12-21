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
   // ui->pushButton->setStyleSheet("background-color: orange;border-style: outset;border-width: 2px;border-radius: 10px;border-color: beige;");


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
    db.close();
}

QString s = "";
int len = 0;

void MainWindow::on_pushButton_clicked() {

   query->exec("SELECT * FROM users");

   /*if(!query->exec()){
       qDebug() << "err";
   } else{
       qDebug() << "ok";
   }*/
   while(query->next()){
       qDebug() << query->value(0);
       if(ui->lineEdit_login->text() == query->value(1) && s == query->value(2)){
           qDebug() << "OK";
       } else{
           QMessageBox::about(this, "Ошибка", "Неверный логин или пароль");
       }
   }
}


void MainWindow::on_lineEdit_password_cursorPositionChanged(int arg1, int arg2)
{
    qDebug()<< arg1 << " " << arg2 << "\n";
    QString pass = ui->lineEdit_password->text();
    if(len < pass.length()){
        len = pass.length();
        s.insert(arg2-1, pass[arg2-1]);
        pass[arg2-1] = '*';
        ui->lineEdit_password->setText(pass);
        ui->lineEdit_password->setCursorPosition(arg2);
        qDebug()<< s << "\n";
    } else if(len > pass.length()){
        int k = arg2;
        len = pass.length();
        if(!len){
            s = "";
            pass = "";
        }
        else{
         //   if(keyPressEvent() == Qt::Key_A){
                s.erase(s.begin() + k, s.begin()+k+1);
                pass.erase(pass.begin()+k, pass.begin()+k);
          //  }
        }
        ui->lineEdit_password->setText(pass);
        ui->lineEdit_password->setCursorPosition(k);
        qDebug()<< s << "\n";
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    registration->show();
    this->close();
}

