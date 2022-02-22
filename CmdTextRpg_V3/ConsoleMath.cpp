#include "ConsoleMath.h"

ConsoleMath::ConsoleMath() 
{
}

ConsoleMath::~ConsoleMath() 
{
}

ConsolePos::ConsolePos(int _x, int _y)
	:x_(_x),
	y_(_y)
{
}

ConsolePos::~ConsolePos()
{
}

ConsolePos& ConsolePos::operator+=(ConsolePos& _Other)
{
	this->x_ += _Other.x_;
	this->y_ += _Other.y_;
	return *this;
}
