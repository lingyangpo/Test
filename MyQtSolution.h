#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyQtSolution.h"

class MyQtSolution : public QMainWindow
{
	Q_OBJECT

public:
	MyQtSolution(QWidget *parent = Q_NULLPTR);

private:
	Ui::MyQtSolutionClass ui;
};
