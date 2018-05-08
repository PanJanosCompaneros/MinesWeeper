#include "firstwindow.h"
#include "ui_firstwindow.h"

FirstWindow::FirstWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::FirstWindow),
    rowsNumber(2), columnsNumber(2), bombsNumber(1), sliderBombsMax(1), sliderBombsMin(1)
{
    ui->setupUi(this);this->setFixedSize(QSize(400, 200));
    this->setWindowTitle("Mines Weeper settings");
    //ui->rowsSlider->setMinimum(this->rowsNumber); //+ chyba dziala. narazie nie mam co sprawdzac.
    ui->okButton->setVisible(false);
    this->show();
}

FirstWindow::~FirstWindow()
{
    delete ui;
}
