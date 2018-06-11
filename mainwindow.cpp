#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)  {

        ui->setupUi(this);

    //QButtonGroup *calc = new QButtonGroup;
    QObject::connect(ui->Calculate, SIGNAL(pressed()), this, SLOT(compute()));
    QObject::connect(ui->A, SIGNAL(clicked()), this, SLOT(aclicked()));
    QObject::connect(ui->B, SIGNAL(clicked()), this, SLOT(bclicked()));
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
void MainWindow::gethw3(){
     this->hw3 = ui->hw3box->value();
}
void MainWindow::gethw4(){
     this->hw4 = ui->hw4box->value();
}
void MainWindow::gethw5(){
     this->hw5 = ui->hw5box->value();
}
void MainWindow::gethw6(){
     this->hw6 = ui->hw6box->value();
}
void MainWindow::gethw7(){
     this->hw7 = ui->hw7box->value();
}
void MainWindow::getmt1(){
     this->mt1 = ui->mt1box->value();
}
void MainWindow::getmt2(){
     this->mt2 = ui->mt2box->value();
}
void MainWindow::getfnl(){
    this->fnl = ui->fnlbox->value();
}
void MainWindow::compute(){
    //Get all values
    gethw1();gethw2();gethw3();gethw4();gethw5();gethw6();gethw7();getmt1();getmt2();getfnl();

    double hwsum = hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7;
    double hwavg = hwsum/7;
    double total=0;
   if(methoda){
    total = (hwavg*0.25)+(mt1*0.2)+(mt2*0.2)+(fnl*0.35);
   }
   if(methoda==false){
       double mt;
       if(mt1>mt2){mt = mt1;}
       else{mt = mt2;}
       total = (hwavg*0.25)+(mt*0.3)+(fnl*0.44);

   }
    ui->GradeTotal->setNum(total);


    return;

}


void MainWindow::on_A_clicked(bool checked)
{
   if(checked) methoda=true;

}

void MainWindow::on_B_clicked(bool checked)
{
    if(checked) methoda=false;
}
