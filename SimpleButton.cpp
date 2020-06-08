#include "SimpleButton.h"

SimpleButton::SimpleButton(QWidget *parent)
	: QPushButton(parent)
{
	// 鼠标浮上后，鼠标指针显示为手型
	setCursor(Qt::PointingHandCursor);
}

SimpleButton::~SimpleButton()
{
}
