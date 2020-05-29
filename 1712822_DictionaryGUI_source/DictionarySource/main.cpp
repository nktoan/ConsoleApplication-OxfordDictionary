#include "_DictionaryGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	_DictionaryGUI w;
	w.show();
	return a.exec();
}
