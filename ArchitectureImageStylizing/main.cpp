#include "ArchitectureImageStylizing.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ArchitectureImageStylizing w;
	w.show();
	return a.exec();
}
