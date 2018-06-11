#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

 private slots:
    void compute();
    void on_A_clicked(bool checked);

    void on_B_clicked(bool checked);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void gethw1();
    void gethw2();
    void gethw3();
    void gethw4();
    void gethw5();
    void gethw6();
    void gethw7();
    void getmt1();
    void getmt2();
    void getfnl();
 //   void compute();

private:
    Ui::MainWindow *ui;
    double hw1, hw2, hw3, hw4, hw5, hw6, hw7, mt1, mt2, fnl;
    bool methoda;

};

#endif // MAINWINDOW_H
