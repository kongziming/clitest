#ifndef SIMPLE_BUTTON_H
#define SIMPLE_BUTTON_H

#include <QPushButton>

/**
* @class	: SimpleButton
* @brief	: �̳�QPushButton����
* @note
* @author	: k00026
*/
class SimpleButton : public QPushButton
{
	Q_OBJECT

public:
	SimpleButton(QWidget *parent);
	~SimpleButton();
};

#endif
