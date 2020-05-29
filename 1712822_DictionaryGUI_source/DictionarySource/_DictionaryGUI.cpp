#include "_DictionaryGUI.h"

_DictionaryGUI::_DictionaryGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	myDict = new Dictionary;
	ui.notification->setText("Please select Import to load Dictionary file.");
	//Hide the rest
	//Look up
	ui.lineEdit->hide();
	ui.meaning->hide();
	//Add
	ui.lineEditAdd->hide();
	ui.meaningAdd->hide();
	ui.okButton->hide();
	//Remove
	ui.lineEditRemove->hide();
	ui.meaningRemove->hide();
	ui.okRemoveButton->hide();
	//ChangeMeaning
	ui.lineEditChange->hide();
	ui.meaningChange->hide();
	ui.okChangeButton->hide();
}
///////////////////////////For Change Word Meaning
void _DictionaryGUI::on_actionChangeMeaning_triggered() {
	//Hide the rest
	ui.meaning->hide();
	ui.lineEdit->hide();

	ui.okButton->hide();
	ui.meaningAdd->hide();
	ui.lineEditAdd->hide();

	ui.lineEditRemove->hide();
	ui.meaningRemove->hide();
	ui.okRemoveButton->hide();
	//Show current
	ui.lineEditChange->show();
	ui.meaningChange->show();
	ui.okChangeButton->show();


	ui.lineEditChange->setText("");
	ui.meaningChange->setText("");
	ui.notification->setText("Enter new word and the new meaning of it then Click On 'OK'.");
}
void _DictionaryGUI::on_lineEditChange_editingFinished() {
	ui.notification->setText("Enter new meaning below.");
}
void _DictionaryGUI::on_okChangeButton_clicked() {
	string key = ui.lineEditChange->text().simplified().toStdString();
	string mean = ui.meaningChange->toPlainText().simplified().toStdString();
	bool check = myDict->changeMeaningofWord(key, mean);
	if (check)	ui.notification->setText("Successfully Change Meaning of this word.");
	else ui.notification->setText("Sorry we did not found this word.");
}

///////////////////////////For Remove Word
void _DictionaryGUI::on_actionDeleteWord_triggered() {
	//Hide the rest
	ui.meaning->hide();
	ui.lineEdit->hide();

	ui.okButton->hide();
	ui.meaningAdd->hide();
	ui.lineEditAdd->hide();

	ui.lineEditChange->hide();
	ui.meaningChange->hide();
	ui.okChangeButton->hide();

	//Show current
	ui.lineEditRemove->show();
	ui.meaningRemove->show();
	ui.okRemoveButton->show();

	ui.lineEditRemove->setText("");
	ui.meaningRemove->setText("");
	ui.notification->setText("Enter the word you want to remove and click on 'OK'.");
}
void _DictionaryGUI::on_lineEditRemove_editingFinished() {
	ui.notification->setText("Are you sure to remove this word?");
}
void _DictionaryGUI::on_okRemoveButton_clicked() {
	string key = ui.lineEditRemove->text().simplified().toStdString();
	bool check = myDict->deleteWord(key);
	if (check) ui.notification->setText("Successfully Remove This New Word.");
	else ui.notification->setText("Sorry We Did Not Found This Word.");
}


///////////////////////////For Add Word
void _DictionaryGUI::on_actionAddNewWord_triggered() {
	//Hide the rest
	ui.meaning->hide();
	ui.lineEdit->hide();

	ui.lineEditRemove->hide();
	ui.meaningRemove->hide();
	ui.okRemoveButton->hide();

	ui.lineEditChange->hide();
	ui.meaningChange->hide();
	ui.okChangeButton->hide();

	//Show current
	ui.okButton->show();
	ui.meaningAdd->show();
	ui.lineEditAdd->show();

	ui.lineEditAdd->setText("");
	ui.meaningAdd->setText("");
	ui.notification->setText("Enter new word and the meaning of it then Click On 'OK'.");
}
void _DictionaryGUI::on_lineEditAdd_editingFinished() {
	ui.notification->setText("Enter new meaning below.");
}
void _DictionaryGUI::on_okButton_clicked() {
	string key = ui.lineEditAdd->text().simplified().toStdString();
	string mean = ui.meaningAdd->toPlainText().simplified().toStdString();
	bool check = myDict->addNewWord(key, mean);
	ui.notification->setText("Successfully Add This New Word.");
}

///////////////////////////For LookUp
void _DictionaryGUI::on_lineEdit_editingFinished() {
	string key = ui.lineEdit->text().simplified().toStdString();
	string mean = "";
	bool find = myDict->lookUpWord(key, mean);
	if (!find) {
		ui.meaning->setText("");
		ui.meaning->hide();
		ui.notification->setText("Sorry we did not found this word.");
	}
	else {
		ui.notification->setText("Check the meaning below.");
		ui.meaning->setText(QString::fromStdString(mean));
		ui.meaning->show();
	}
}
void _DictionaryGUI::on_menuLookUp_aboutToShow() {
	//Hide the rest
	ui.lineEditAdd->hide();
	ui.meaningAdd->hide();
	ui.okButton->hide();

	ui.lineEditRemove->hide();
	ui.meaningRemove->hide();
	ui.okRemoveButton->hide();

	ui.lineEditChange->hide();
	ui.meaningChange->hide();
	ui.okChangeButton->hide();

	//Show current
	ui.meaning->show();
	ui.lineEdit->show();

	ui.lineEdit->setText("");
	ui.meaning->setText("");
	ui.notification->setText("Enter the word you want to search for below.");
}

///////////////////////For Import
void _DictionaryGUI::on_menuImport_aboutToShow() {
	QString filename = QFileDialog::getOpenFileName(this, tr("Open dictionary"), "//", "Text File (*.txt)");
	ui.notification->setText("Waiting for importing...");
	ui.lineEdit->setText("");
	ui.meaning->setText("");

	ui.meaning->hide();
	string file = filename.toStdString();
	bool check = myDict->loadDictionary(file);
	if (check == 0)
	{
			ui.notification->setText("Something wrong here! Check your file again!");
	}
	else ui.notification->setText("Successfully Loading Dictionary!");

	//Hide the rest
	ui.lineEdit->hide();
	ui.meaning->hide();

	ui.lineEditAdd->hide();
	ui.meaningAdd->hide();
	ui.okButton->hide();

	ui.lineEditRemove->hide();
	ui.meaningRemove->hide();
	ui.okRemoveButton->hide();

	ui.lineEditChange->hide();
	ui.meaningChange->hide();
	ui.okChangeButton->hide();
}

///////////////////////For Export
void _DictionaryGUI::on_menuExport_aboutToShow() {
	QString filename = QFileDialog::getSaveFileName(this, tr("Export dictionary"), "//", "Text File (*.txt)");
	ui.notification->setText("Waiting for importing...");
	ui.lineEdit->setText("");
	ui.meaning->setText("");
	ui.meaning->hide();

	bool check = myDict->saveDictionary(filename.toStdString());
	ui.notification->setText("Export successfully!");
	//Hide the rest
	ui.lineEdit->hide();
	ui.meaning->hide();

	ui.lineEditAdd->hide();
	ui.meaningAdd->hide();
	ui.okButton->hide();
	
	ui.lineEditRemove->hide();
	ui.meaningRemove->hide();
	ui.okRemoveButton->hide();

	ui.lineEditChange->hide();
	ui.meaningChange->hide();
	ui.okChangeButton->hide();
}