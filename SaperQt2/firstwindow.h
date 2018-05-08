#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
//#include <QSlider>
namespace Ui {
class FirstWindow;
}

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = 0);
    ~FirstWindow();

private:
    void calculateAndSetBombsMinAndMax();//+
    void updateBombsSlider();//+
    void updateFromRowsSlider();//+
    void updateFromColumnsSlider();//+]
    void updateFromBombsSlider();//+
    int rowsNumber, columnsNumber, bombsNumber;
    int sliderBombsMin, sliderBombsMax;

    Ui::FirstWindow *ui;
};

#endif // FIRSTWINDOW_H
