#include "pixelplayer.h"
extern "C"  {
#include  <libavcodec/avcodec.h>
}

PixelPlayer::PixelPlayer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	registerMenuBarEvent();
	avcodec_configuration();
	//qDebug("av configuration:%s", tip);
}

PixelPlayer::~PixelPlayer()
{

}

void PixelPlayer::registerMenuBarEvent()
{
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(onActionOpenClicked()));
	connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(onActionExitClicked()));
}

void  PixelPlayer::onActionOpenClicked()
{
	qDebug("this is the onActionOpenClicked");
}

void PixelPlayer::onActionExitClicked()
{
	qDebug("this is the onActionExitClicked");
}
