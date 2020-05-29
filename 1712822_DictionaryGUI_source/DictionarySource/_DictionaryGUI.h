//1712822 - Nguyen Khanh Toan - 17CNTN
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui__DictionaryGUI.h"
#include <QTextStream>
#include <QtCore>
#include "Dictionary.h"
#include <QFileDialog>
#include <QMessageBox>

class _DictionaryGUI : public QMainWindow
{
	Q_OBJECT

public:
	_DictionaryGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::_DictionaryGUIClass ui;
	Dictionary* myDict;
	
private slots:
	//Import and Export
	void on_menuImport_aboutToShow();
	void on_menuExport_aboutToShow();

	//Look Up
	void on_menuLookUp_aboutToShow();
	void on_lineEdit_editingFinished();

	//Add Word
	void on_actionAddNewWord_triggered();
	void on_lineEditAdd_editingFinished();	
	void on_okButton_clicked();
	
	//Delete Word
	void on_actionDeleteWord_triggered();
	void on_lineEditRemove_editingFinished();
	void on_okRemoveButton_clicked();
	
	//Change Word Meaning
	void on_actionChangeMeaning_triggered();
	void on_lineEditChange_editingFinished();
	void on_okChangeButton_clicked();

};
