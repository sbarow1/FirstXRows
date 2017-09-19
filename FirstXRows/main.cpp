#include "firstxrows.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FirstXRows w;
	w.show();
	return a.exec();
}
