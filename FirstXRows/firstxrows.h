#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_firstxrows.h"

class FirstXRows : public QMainWindow
{
	Q_OBJECT

public:
	FirstXRows(QWidget *parent = Q_NULLPTR);

private slots:
	void on_okButton_clicked();
	void on_masterToolButton_clicked();
	void on_outputToolButton_clicked();
	void on_linesSpinBox_editingFinished();

private:
	Ui::FirstXRowsClass ui;
	QString masterFileName;
	QString outputFileName;
	int numLines;
};
