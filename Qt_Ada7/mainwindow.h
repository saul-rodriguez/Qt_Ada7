#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//#include "../../Qtraspberrylib/ht16k33.h"

#include "../../Qtraspberrylib/ada7seg.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setUpAda7();
    
private:
    Ui::MainWindow *ui;

    //Ht16k33 Ada7;
    Ada7Seg adaDisp;
    static const quint8 numbertable[];
};

#endif // MAINWINDOW_H
