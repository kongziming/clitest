#include "SimpleButton.h"

SimpleButton::SimpleButton(QWidget *parent)
	: QPushButton(parent)
{
	// ��긡�Ϻ����ָ����ʾΪ����
	setCursor(Qt::PointingHandCursor);
}

SimpleButton::~SimpleButton()
{
}
