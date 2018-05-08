/********************************************************************************
** Form generated from reading UI file 'firstwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTWINDOW_H
#define UI_FIRSTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *rowsSlider;
    QLabel *rowsLabel;
    QHBoxLayout *horizontalLayout_2;
    QSlider *columnsSlider;
    QLabel *columnsLabel;
    QHBoxLayout *horizontalLayout_3;
    QSlider *bombsSlider;
    QLabel *bombsLabel;
    QPushButton *okButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirstWindow)
    {
        if (FirstWindow->objectName().isEmpty())
            FirstWindow->setObjectName(QStringLiteral("FirstWindow"));
        FirstWindow->resize(404, 232);
        FirstWindow->setAnimated(true);
        centralWidget = new QWidget(FirstWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 311, 141));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rowsSlider = new QSlider(layoutWidget);
        rowsSlider->setObjectName(QStringLiteral("rowsSlider"));
        rowsSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(rowsSlider);

        rowsLabel = new QLabel(layoutWidget);
        rowsLabel->setObjectName(QStringLiteral("rowsLabel"));

        horizontalLayout->addWidget(rowsLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        columnsSlider = new QSlider(layoutWidget);
        columnsSlider->setObjectName(QStringLiteral("columnsSlider"));
        columnsSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(columnsSlider);

        columnsLabel = new QLabel(layoutWidget);
        columnsLabel->setObjectName(QStringLiteral("columnsLabel"));

        horizontalLayout_2->addWidget(columnsLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        bombsSlider = new QSlider(layoutWidget);
        bombsSlider->setObjectName(QStringLiteral("bombsSlider"));
        bombsSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(bombsSlider);

        bombsLabel = new QLabel(layoutWidget);
        bombsLabel->setObjectName(QStringLiteral("bombsLabel"));

        horizontalLayout_3->addWidget(bombsLabel);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        okButton = new QPushButton(centralWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(350, 40, 41, 91));
        FirstWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FirstWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 404, 25));
        FirstWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(FirstWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FirstWindow->setStatusBar(statusBar);

        retranslateUi(FirstWindow);

        QMetaObject::connectSlotsByName(FirstWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FirstWindow)
    {
        FirstWindow->setWindowTitle(QApplication::translate("FirstWindow", "FirstWindow", nullptr));
        label_4->setText(QApplication::translate("FirstWindow", "rows", nullptr));
        label_5->setText(QApplication::translate("FirstWindow", "columns", nullptr));
        label_6->setText(QApplication::translate("FirstWindow", "bombs", nullptr));
        rowsLabel->setText(QApplication::translate("FirstWindow", "1", nullptr));
        columnsLabel->setText(QApplication::translate("FirstWindow", "1", nullptr));
        bombsLabel->setText(QApplication::translate("FirstWindow", "1", nullptr));
        okButton->setText(QApplication::translate("FirstWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstWindow: public Ui_FirstWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWINDOW_H
