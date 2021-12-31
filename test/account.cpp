#include "account.h"
#include "ui_account.h"
#include "QDebug"
#include "QPixmap"

account::account(QSqlDatabase db, QSqlQuery *query, QVariant id, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::account)
{
    ui->setupUi(this);
    this->db = db;
    if(!this->db.open()){
        qDebug() << "Not conected";
    } else{
        qDebug() << "Conected";
    }
    query->exec("SELECT * FROM users");
    while (query->next()){
        if(query->value(0) == id){
            ui->label_2->setText(query->value(1).toString());

            QByteArray urll = query->value(3).toByteArray();
            QPixmap urll_pixmap;
            urll_pixmap.loadFromData(urll);
            ui->user_avatar->setPixmap(urll_pixmap);

            break;
        }
    }

    newprofile = new changeprofile(db, query, id);
    connect(newprofile, &changeprofile::account, this, &account::show);
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



