#include "pixelplayer.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
	QApplication a(argc, argv);
	PixelPlayer w;
	w.show();
	return a.exec();
}
