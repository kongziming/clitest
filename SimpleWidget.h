#ifndef SIMPLE_WIDGET_H
#define SIMPLE_WIDGET_H

#include <QtWidgets/QWidget>
#include "ui_SimpleWidget.h"

class SimpleWidget : public QWidget
{
	Q_OBJECT

public:
	SimpleWidget(QWidget *parent = nullptr);

private:
	Ui::SimpleWidgetClass ui;
};

#endif
