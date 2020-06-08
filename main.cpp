#include "SimpleWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SimpleWidget w;
	w.show();
	return a.exec();
}
