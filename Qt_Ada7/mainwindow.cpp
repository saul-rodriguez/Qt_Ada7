#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setUpAda7();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUpAda7()
{
    adaDisp.open(0x70);
    adaDisp.setBlinkRate(0);
    adaDisp.setBrightness(1);

    adaDisp.writeint(-198);
}
