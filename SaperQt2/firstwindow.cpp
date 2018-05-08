#include "firstwindow.h"
#include "ui_firstwindow.h"

FirstWindow::FirstWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::FirstWindow),
    rowsNumber(2), columnsNumber(2), bombsNumber(1), sliderBombsMax(1), sliderBombsMin(1)
{
    ui->setupUi(this);this->setFixedSize(QSize(400, 200));
    this->setWindowTitle("Mines Weeper settings");
    //ui->rowsSlider->setMinimum(this->rowsNumber); //+ chyba dziala. narazie nie mam co sprawdzac.
    //ui->columnsSlider->setMinimum(this->columnsNumber); //+ chyba dziala. narazie nie mam co sprawdzac.
    ui->okButton->setVisible(false);
    this->show();
}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::calculateAndSetBombsMinAndMax()//+
{
    this->sliderBombsMin = 1;
    this->sliderBombsMax = (this->rowsNumber  *  this->columnsNumber -1);
}

void FirstWindow::updateBombsSlider()//+
{
    //for example right here u can put a method which turns on visibility of the "OK" button if it's turned off:
    //if(ui->okButton->isVisible() == false) ui->okButton->setVisible(true); // dodalem do updateFromBombsSlider();
    //ale lepiej bedzie to chyba dodac  na poczatku kodu reagujacego na przesuniecie bombSlider'a

    this->calculateAndSetBombsMinAndMax();
    ui->bombsSlider->setMinimum(this->sliderBombsMin);
    ui->bombsSlider->setMaximum(this->sliderBombsMax);

    if (this->bombsNumber > this->sliderBombsMax)  // (a moze trzeba doddac sprawdzanie po QSlider w ui, a nie tylko po wartosciach zmiennych w this?)
    {
        this->bombsNumber = this->sliderBombsMin;
        ui->bombsSlider->setValue(this->sliderBombsMin);
    }
    ui->bombsSlider->setValue(this->bombsNumber);
}

void FirstWindow::updateFromRowsSlider()//+
{
    this->rowsNumber = ui->rowsSlider->value();
    QString rows = QString::number(this->rowsNumber);
    ui->rowsLabel->setText(rows);
    this->updateBombsSlider();
}

void FirstWindow::updateFromColumnsSlider()//+
{
    this->columnsNumber = ui->columnsSlider->value();
    QString columns = QString::number(this->columnsNumber);
    ui->columnsLabel->setText(columns);
    this->updateBombsSlider();

}

void FirstWindow::updateFromBombsSlider()//+
{
    if(ui->okButton->isVisible() == false) ui->okButton->setVisible(true);
    QString bombsString = QString::number(ui->bombsSlider->value());
    ui->bombsLabel->setText(bombsString);
    this->bombsNumber=ui->bombsSlider->value();
}
