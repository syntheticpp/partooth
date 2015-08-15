/*
 * Copyright (c) Christian Surlykke, 2015
 *
 * This file is part of Partooth
 * It is distributed under the GPL 3 license.
 * Please refer to the LICENSE file for a copy of the license.
 */

#ifndef _MAINWINDOW_H
#define	_MAINWINDOW_H

#include <QMap>

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();
	virtual ~MainWindow();

signals:
	void forgetDevice(int row);
	void pairDevice(int row);

private slots:
	void onPairedDoubleClicked(const QModelIndex& index);
	void onOtherDoubleClicked(const QModelIndex& index);

private:
	Ui::mainwindow widget;
	
};

#endif	/* _MAINWINDOW_H */
