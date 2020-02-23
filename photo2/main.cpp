#include <QApplication>
#include <QtCore/QTextCodec>
#include "qt1.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

    app.setFont(QFont("wenquanyi", 8));
	//app.setFont(QFont("simsun", 10));

	Qt1 MD;
    MD.show();

	return app.exec();
}
