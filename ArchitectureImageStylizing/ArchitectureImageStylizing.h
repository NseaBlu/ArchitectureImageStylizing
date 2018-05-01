#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ArchitectureImageStylizing.h"

class ArchitectureImageStylizing : public QMainWindow
{
	Q_OBJECT

public:
	ArchitectureImageStylizing(QWidget *parent = Q_NULLPTR);

private:
	Ui::ArchitectureImageStylizingClass ui;
};
