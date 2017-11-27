#ifndef PIXELPLAYER_H
#define PIXELPLAYER_H

#include <QtWidgets/QMainWindow>
#include "ui_pixelplayer.h"

class PixelPlayer : public QMainWindow
{
	Q_OBJECT

public:
	PixelPlayer(QWidget *parent = 0);
	~PixelPlayer();

private:
	Ui::PixelPlayerClass ui;
private:
	void registerMenuBarEvent();

private slots:
	void onActionOpenClicked();
	void onActionExitClicked();
};

#endif // PIXELPLAYER_H
