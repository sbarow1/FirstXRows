#include "firstxrows.h"
#include <iostream>
#include <QFileDialog>
#include "CSVLibrary.h"
#include <fstream>
#include <cstdlib>
#include <string>

FirstXRows::FirstXRows(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void FirstXRows::on_okButton_clicked()
{
	// open input file
	std::ifstream fin(masterFileName.toStdString());

	// open output file
	std::ofstream fout(outputFileName.toStdString());

	// Read a row from the input file and output it to the output file until end of file
	// or you have read the correct number of rows
	CSVLibrary::CSVRow row;

	int count = 0;
	// vector for the rest of the rows so that we can update the Master file
	std::vector<CSVLibrary::CSVRow> rows;
	while (fin >> row)
	{
		if (count == 0)
		{
			fout << row;
			rows.push_back(row);
		}
		else if (count < numLines)
		{
			fout << row;
		} 
		else 
			rows.push_back(row);

		count++;
	}

	// Close the input and output files
	fin.close();
	fout.close();

	// Now update the Master File (remove the rows that you added to the outputfile
	std::ofstream newMaster(masterFileName.toStdString());
	for (auto i : rows)
		newMaster << i;

	newMaster.close();

	// Quit the QT GUI application
	QCoreApplication::quit();
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
