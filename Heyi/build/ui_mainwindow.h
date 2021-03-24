/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *f1;
    QLabel *f2;
    QPushButton *start;
    QLabel *output;
    QLabel *result;
    QLineEdit *f1_edit;
    QLineEdit *f2_edit;
    QLineEdit *result_edit;
    QLineEdit *out_edit;
    QLabel *Title;
    QLabel *f1_2;
    QMenuBar *menuBar;
    QMenu *menuHeyi;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        f1 = new QLabel(centralWidget);
        f1->setObjectName(QStringLiteral("f1"));
        f1->setGeometry(QRect(40, 10, 41, 17));
        f2 = new QLabel(centralWidget);
        f2->setObjectName(QStringLiteral("f2"));
        f2->setGeometry(QRect(40, 110, 41, 17));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(150, 90, 89, 25));
        output = new QLabel(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(290, 10, 67, 17));
        result = new QLabel(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(280, 110, 67, 17));
        f1_edit = new QLineEdit(centralWidget);
        f1_edit->setObjectName(QStringLiteral("f1_edit"));
        f1_edit->setGeometry(QRect(10, 40, 113, 25));
        f2_edit = new QLineEdit(centralWidget);
        f2_edit->setObjectName(QStringLiteral("f2_edit"));
        f2_edit->setGeometry(QRect(10, 150, 113, 25));
        result_edit = new QLineEdit(centralWidget);
        result_edit->setObjectName(QStringLiteral("result_edit"));
        result_edit->setGeometry(QRect(220, 150, 171, 25));
        out_edit = new QLineEdit(centralWidget);
        out_edit->setObjectName(QStringLiteral("out_edit"));
        out_edit->setGeometry(QRect(250, 40, 113, 25));
        Title = new QLabel(centralWidget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(150, 0, 91, 20));
        f1_2 = new QLabel(centralWidget);
        f1_2->setObjectName(QStringLiteral("f1_2"));
        f1_2->setGeometry(QRect(130, 210, 121, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuHeyi = new QMenu(menuBar);
        menuHeyi->setObjectName(QStringLiteral("menuHeyi"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHeyi->menuAction());
        menuHeyi->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\220\210\344\270\200\346\265\213\350\257\225", nullptr));
        f1->setText(QApplication::translate("MainWindow", "\345\205\254\345\274\2171", nullptr));
        f2->setText(QApplication::translate("MainWindow", "\345\205\254\345\274\2172", nullptr));
        start->setText(QApplication::translate("MainWindow", "\345\220\210\344\270\200\346\265\213\350\257\225", nullptr));
        output->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234", nullptr));
        result->setText(QApplication::translate("MainWindow", "\345\220\210\344\270\200\345\205\203", nullptr));
        f1_edit->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\205\254\345\274\2171", nullptr));
        f2_edit->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\205\254\345\274\2172", nullptr));
        Title->setText(QApplication::translate("MainWindow", "\345\220\210\344\270\200\346\265\213\350\257\225\347\225\214\351\235\242", nullptr));
        f1_2->setText(QApplication::translate("MainWindow", "\345\215\225\345\215\227\350\211\257  21001401", nullptr));
        menuHeyi->setTitle(QApplication::translate("MainWindow", "Heyi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
