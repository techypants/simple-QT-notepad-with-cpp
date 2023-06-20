/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew_file;
    QAction *actionopen_file;
    QAction *actionsave_file;
    QAction *actionMy_Resume;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *boldbutton;
    QToolButton *superscript;
    QToolButton *subscript;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *notep;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(933, 539);
        actionnew_file = new QAction(MainWindow);
        actionnew_file->setObjectName("actionnew_file");
        actionopen_file = new QAction(MainWindow);
        actionopen_file->setObjectName("actionopen_file");
        actionsave_file = new QAction(MainWindow);
        actionsave_file->setObjectName("actionsave_file");
        actionMy_Resume = new QAction(MainWindow);
        actionMy_Resume->setObjectName("actionMy_Resume");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, -10, 241, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        boldbutton = new QToolButton(horizontalLayoutWidget);
        boldbutton->setObjectName("boldbutton");

        horizontalLayout_2->addWidget(boldbutton);

        superscript = new QToolButton(horizontalLayoutWidget);
        superscript->setObjectName("superscript");

        horizontalLayout_2->addWidget(superscript);

        subscript = new QToolButton(horizontalLayoutWidget);
        subscript->setObjectName("subscript");

        horizontalLayout_2->addWidget(subscript);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 30, 931, 471));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 929, 469));
        notep = new QTextEdit(scrollAreaWidgetContents);
        notep->setObjectName("notep");
        notep->setGeometry(QRect(0, 0, 931, 461));
        QFont font;
        font.setPointSize(18);
        notep->setFont(font);
        scrollArea->setWidget(scrollAreaWidgetContents);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(240, 0, 91, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 933, 25));
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menufile->addAction(actionnew_file);
        menufile->addAction(actionopen_file);
        menufile->addAction(actionsave_file);
        menuAbout->addAction(actionMy_Resume);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnew_file->setText(QCoreApplication::translate("MainWindow", "new file", nullptr));
        actionopen_file->setText(QCoreApplication::translate("MainWindow", "open file", nullptr));
        actionsave_file->setText(QCoreApplication::translate("MainWindow", "save file as", nullptr));
        actionMy_Resume->setText(QCoreApplication::translate("MainWindow", "My Resume", nullptr));
        boldbutton->setText(QCoreApplication::translate("MainWindow", "bold", nullptr));
        superscript->setText(QCoreApplication::translate("MainWindow", "superscript", nullptr));
        subscript->setText(QCoreApplication::translate("MainWindow", "subscript", nullptr));
        notep->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "font size", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "10", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "12", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "14", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "16", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "18", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "20", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MainWindow", "22", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("MainWindow", "24", nullptr));
        comboBox->setItemText(13, QString());

        menufile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
