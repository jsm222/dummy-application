#include "mainwindow.h"
#include <QMessageBox>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[this] {

    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setText("Great it works");
    msgBox->exec();

    });



}

MainWindow::~MainWindow()
{
    delete ui;
}
