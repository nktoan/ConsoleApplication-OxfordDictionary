/********************************************************************************
** Form generated from reading UI file '_DictionaryGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI__DICTIONARYGUI_H
#define UI__DICTIONARYGUI_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui__DictionaryGUIClass
{
public:
    QAction *actionAddNewWord;
    QAction *actionDeleteWord;
    QAction *actionChangeMeaning;
    QWidget *centralWidget;
    QLabel *welcome_2;
    QLabel *version;
    QLabel *author;
    QLabel *findIcon;
    QLineEdit *lineEdit;
    QPushButton *DeleteButton;
    QTextEdit *meaning;
    QLabel *notification;
    QTextEdit *meaningAdd;
    QLineEdit *lineEditAdd;
    QPushButton *okButton;
    QLineEdit *lineEditRemove;
    QTextEdit *meaningRemove;
    QPushButton *okRemoveButton;
    QLineEdit *lineEditChange;
    QTextEdit *meaningChange;
    QPushButton *okChangeButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuImport;
    QMenu *menuExport;
    QMenu *menuLookUp;
    QMenu *menuEdit_Dictionary;

    void setupUi(QMainWindow *_DictionaryGUIClass)
    {
        if (_DictionaryGUIClass->objectName().isEmpty())
            _DictionaryGUIClass->setObjectName(QStringLiteral("_DictionaryGUIClass"));
        _DictionaryGUIClass->resize(607, 400);
        _DictionaryGUIClass->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        actionAddNewWord = new QAction(_DictionaryGUIClass);
        actionAddNewWord->setObjectName(QStringLiteral("actionAddNewWord"));
        actionDeleteWord = new QAction(_DictionaryGUIClass);
        actionDeleteWord->setObjectName(QStringLiteral("actionDeleteWord"));
        actionChangeMeaning = new QAction(_DictionaryGUIClass);
        actionChangeMeaning->setObjectName(QStringLiteral("actionChangeMeaning"));
        centralWidget = new QWidget(_DictionaryGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        welcome_2 = new QLabel(centralWidget);
        welcome_2->setObjectName(QStringLiteral("welcome_2"));
        welcome_2->setGeometry(QRect(80, 10, 461, 51));
        QFont font;
        font.setFamily(QStringLiteral("Georgia"));
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        welcome_2->setFont(font);
        welcome_2->setStyleSheet(QStringLiteral("color: rgb(255, 170, 0);"));
        version = new QLabel(centralWidget);
        version->setObjectName(QStringLiteral("version"));
        version->setGeometry(QRect(190, 300, 231, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        version->setFont(font1);
        version->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        author = new QLabel(centralWidget);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(160, 320, 301, 20));
        author->setFont(font1);
        author->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        findIcon = new QLabel(centralWidget);
        findIcon->setObjectName(QStringLiteral("findIcon"));
        findIcon->setGeometry(QRect(90, 100, 31, 31));
        findIcon->setStyleSheet(QStringLiteral("image: url(:/newPrefix/img_388871.png);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 100, 361, 31));
        lineEdit->setStyleSheet(QLatin1String("color: #ffffff;\n"
"font-family: \"Open sans\";\n"
"background: #262626;\n"
"border: none;\n"
"font-size: 16px;\n"
"font-weight: bolder;\n"
""));
        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(500, 100, 31, 31));
        DeleteButton->setStyleSheet(QStringLiteral("border-image: url(:/newPrefix/remove.png);"));
        meaning = new QTextEdit(centralWidget);
        meaning->setObjectName(QStringLiteral("meaning"));
        meaning->setGeometry(QRect(90, 140, 441, 141));
        notification = new QLabel(centralWidget);
        notification->setObjectName(QStringLiteral("notification"));
        notification->setGeometry(QRect(90, 60, 511, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Georgia"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        notification->setFont(font2);
        notification->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        meaningAdd = new QTextEdit(centralWidget);
        meaningAdd->setObjectName(QStringLiteral("meaningAdd"));
        meaningAdd->setGeometry(QRect(90, 140, 441, 141));
        lineEditAdd = new QLineEdit(centralWidget);
        lineEditAdd->setObjectName(QStringLiteral("lineEditAdd"));
        lineEditAdd->setGeometry(QRect(130, 100, 361, 31));
        lineEditAdd->setStyleSheet(QLatin1String("color: #ffffff;\n"
"font-family: \"Open sans\";\n"
"background: #262626;\n"
"border: none;\n"
"font-size: 16px;\n"
"font-weight: bolder;\n"
""));
        okButton = new QPushButton(centralWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(540, 190, 61, 23));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        okButton->setFont(font3);
        lineEditRemove = new QLineEdit(centralWidget);
        lineEditRemove->setObjectName(QStringLiteral("lineEditRemove"));
        lineEditRemove->setGeometry(QRect(130, 100, 361, 31));
        lineEditRemove->setStyleSheet(QLatin1String("color: #ffffff;\n"
"font-family: \"Open sans\";\n"
"background: #262626;\n"
"border: none;\n"
"font-size: 16px;\n"
"font-weight: bolder;\n"
""));
        meaningRemove = new QTextEdit(centralWidget);
        meaningRemove->setObjectName(QStringLiteral("meaningRemove"));
        meaningRemove->setGeometry(QRect(90, 140, 441, 141));
        okRemoveButton = new QPushButton(centralWidget);
        okRemoveButton->setObjectName(QStringLiteral("okRemoveButton"));
        okRemoveButton->setGeometry(QRect(540, 190, 61, 23));
        okRemoveButton->setFont(font1);
        lineEditChange = new QLineEdit(centralWidget);
        lineEditChange->setObjectName(QStringLiteral("lineEditChange"));
        lineEditChange->setGeometry(QRect(130, 100, 361, 31));
        lineEditChange->setStyleSheet(QLatin1String("color: #ffffff;\n"
"font-family: \"Open sans\";\n"
"background: #262626;\n"
"border: none;\n"
"font-size: 16px;\n"
"font-weight: bolder;\n"
""));
        meaningChange = new QTextEdit(centralWidget);
        meaningChange->setObjectName(QStringLiteral("meaningChange"));
        meaningChange->setGeometry(QRect(90, 140, 441, 141));
        okChangeButton = new QPushButton(centralWidget);
        okChangeButton->setObjectName(QStringLiteral("okChangeButton"));
        okChangeButton->setGeometry(QRect(540, 190, 61, 23));
        okChangeButton->setFont(font1);
        _DictionaryGUIClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(_DictionaryGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        _DictionaryGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(_DictionaryGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        _DictionaryGUIClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(_DictionaryGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 607, 21));
        menuImport = new QMenu(menuBar);
        menuImport->setObjectName(QStringLiteral("menuImport"));
        menuExport = new QMenu(menuBar);
        menuExport->setObjectName(QStringLiteral("menuExport"));
        menuLookUp = new QMenu(menuBar);
        menuLookUp->setObjectName(QStringLiteral("menuLookUp"));
        menuEdit_Dictionary = new QMenu(menuBar);
        menuEdit_Dictionary->setObjectName(QStringLiteral("menuEdit_Dictionary"));
        _DictionaryGUIClass->setMenuBar(menuBar);

        menuBar->addAction(menuImport->menuAction());
        menuBar->addAction(menuExport->menuAction());
        menuBar->addAction(menuLookUp->menuAction());
        menuBar->addAction(menuEdit_Dictionary->menuAction());
        menuEdit_Dictionary->addAction(actionAddNewWord);
        menuEdit_Dictionary->addAction(actionDeleteWord);
        menuEdit_Dictionary->addAction(actionChangeMeaning);

        retranslateUi(_DictionaryGUIClass);

        QMetaObject::connectSlotsByName(_DictionaryGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *_DictionaryGUIClass)
    {
        _DictionaryGUIClass->setWindowTitle(QApplication::translate("_DictionaryGUIClass", "_DictionaryGUI", nullptr));
        actionAddNewWord->setText(QApplication::translate("_DictionaryGUIClass", "AddNewWord", nullptr));
        actionDeleteWord->setText(QApplication::translate("_DictionaryGUIClass", "DeleteWord", nullptr));
        actionChangeMeaning->setText(QApplication::translate("_DictionaryGUIClass", "ChangeMeaning", nullptr));
        welcome_2->setText(QApplication::translate("_DictionaryGUIClass", "Welcome to Oxford Dictionary", nullptr));
        version->setText(QApplication::translate("_DictionaryGUIClass", "Version 1.0 - Release: 26/11/2018", nullptr));
        author->setText(QApplication::translate("_DictionaryGUIClass", "Author: Nguyen Khanh Toan - 17CNTN- HCMUS", nullptr));
        findIcon->setText(QString());
        lineEdit->setText(QString());
        DeleteButton->setText(QString());
        notification->setText(QApplication::translate("_DictionaryGUIClass", "Notification: Nothing new!", nullptr));
        okButton->setText(QApplication::translate("_DictionaryGUIClass", "OK", nullptr));
        okRemoveButton->setText(QApplication::translate("_DictionaryGUIClass", "OK", nullptr));
        okChangeButton->setText(QApplication::translate("_DictionaryGUIClass", "OK", nullptr));
        menuImport->setTitle(QApplication::translate("_DictionaryGUIClass", "Import", nullptr));
        menuExport->setTitle(QApplication::translate("_DictionaryGUIClass", "Export", nullptr));
        menuLookUp->setTitle(QApplication::translate("_DictionaryGUIClass", "Look Up", nullptr));
        menuEdit_Dictionary->setTitle(QApplication::translate("_DictionaryGUIClass", "Edit Dictionary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class _DictionaryGUIClass: public Ui__DictionaryGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI__DICTIONARYGUI_H
