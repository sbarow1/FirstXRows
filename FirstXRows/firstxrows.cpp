#include "firstxrows.h"
#include <iostream>
#include <QFileDialog>

FirstXRows::FirstXRows(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void FirstXRows::on_okButton_clicked()
{
	std::cout << "I am in on_okButton_clicked()" << std::endl;
}

void FirstXRows::on_masterToolButton_clicked()
{
	masterFileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
		tr("CSV Files (*.csv)"));
	
	ui.masterFileLineEdit->insert(masterFileName);
}

void FirstXRows::on_outputToolButton_clicked()
{
	outputFileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString(),
		tr("CSV Files (*.csv)"));

	ui.outputFileLineEdit->insert(outputFileName);
}

void FirstXRows::on_linesSpinBox_editingFinished()
{
	numLines = ui.linesSpinBox->value();
}
