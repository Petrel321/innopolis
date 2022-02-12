#include "account.h"
#include "ui_account.h"
#include "QDebug"
#include "QPixmap"

QVariant u_id;

account::account(QSqlDatabase db, QSqlQuery *query, QVariant id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::account)
{
    ui->setupUi(this);
    this->setStyleSheet("color: white; background-color: #022140; font: 18px Roboto;");
    ui->user_avatar->setStyleSheet("border-style: outset; border-radius: 10px;");
    ui->pushButton_change_profile->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; padding: 3px 6px;");
    ui->pushButton_about_us->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; max-width: 120px; padding: 3px 6px;");
    ui->startsolving->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; max-width: 120px; padding: 3px 6px;");
    ui->pushButton_exit->setStyleSheet("background-color: #E9AA08; border-style: outset; border-radius: 10px; max-width: 120px; padding: 3px 6px;");

    ui->label_2->setWordWrap(true);
    this->db = db;
    if(!this->db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }
    this->query = query;
    u_id = id;

    update_changes();

    startsolving = new tasks(db, query);
    connect(startsolving, &tasks::account, this, &account::show);

    newprofile = new changeprofile(db, query, id);
    connect(newprofile, &changeprofile::account, this, &account::update_changes);
}

account::~account()
{
    delete ui;
}

void account::on_pushButton_change_profile_clicked()
{

    newprofile->show();
    this->close();
}


void account::on_pushButton_exit_clicked()
{
    emit mainWindow();
    this->close();
}

void account::update_changes(){
    this->show();
    query->exec("SELECT * FROM users");

    while (query->next()){
        if(query->value(0) == u_id){
            ui->label_2->setText(query->value(1).toString());

            QByteArray urll = query->value(3).toByteArray();
            QPixmap urll_pixmap;
            urll_pixmap.loadFromData(urll);
            ui->user_avatar->setPixmap(urll_pixmap);

            break;
        }
    }
}



void account::on_pushButton_about_us_clicked()
{

}


void account::on_startsolving_clicked()
{
    startsolving->show();
    this->close();
}

