#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)  {

        ui->setupUi(this);

    //QButtonGroup *calc = new QButtonGroup;
    QObject::connect(ui->Calculate, SIGNAL(pressed()), this, SLOT(compute()));
   // QObject::connect(ui->hw1box, SIGNAL(valueChanged(double)),ui->hw1slider,SLOT(setValue(int)) );
   // QObject::connect(ui->,SIGNAL(valueChanged(int)),ui->spinBox1,SLOT(setValue(double)) );
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gethw1(){
     this->hw1 = ui->hw1box->value();
}
void MainWindow::gethw2(){
     this->hw2 = ui->hw2box->value();
}


void MainWindow::compute(){
    double hwsum = hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7;
    double hwavg = hwsum/7;
    double total = (hwavg*0.25)+(mt1*0.2)+(mt2*0.2)+(fnl*0.35);
    ui->GradeTotal->setNum(total);


    return;

}

