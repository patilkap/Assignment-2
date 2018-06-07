#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
    QObject::connect(ui->Calculate, SIGNAL(button_pressed()), this, SLOT(compute()));

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gethw1(){
    this->hw1 = ui->hw1box->value();
}

void MainWindow::sethw1(){
    double t = ui->hw1slider();
    ui->hw1box(t);

}
