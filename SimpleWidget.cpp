#include <QFile>
#include "SimpleButton.h"

#include "SimpleWidget.h"


SimpleWidget::SimpleWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	SimpleButton *pBtn = new SimpleButton(this);
	pBtn->setGeometry(20, 20, 200, 40);

	QFile file(":/SimpleWidget/SimpleWidget.css");
	if (file.open(QIODevice::Text | QIODevice::ReadOnly))
	{
		setStyleSheet(file.readAll());
	}
}
