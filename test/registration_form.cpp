#include "registration_form.h"
#include "ui_registration_form.h"

Registration_form::Registration_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration_form)
{
    ui->setupUi(this);
}

Registration_form::~Registration_form()
{
    delete ui;
}

void Registration_form::on_pushButton_back_clicked()
{
    this->close();
    emit mainWindow();
}

