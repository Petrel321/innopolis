#ifndef REGISTRATION_FORM_H
#define REGISTRATION_FORM_H

#include <QMainWindow>


namespace Ui {
class Registration_form;
}

class Registration_form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration_form(QWidget *parent = nullptr);
    ~Registration_form();
signals:
    void mainWindow();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::Registration_form *ui;
};

#endif // REGISTRATION_FORM_H
