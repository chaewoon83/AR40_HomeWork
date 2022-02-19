#include "ConsoleObject.h"

ConsoleObject::ConsoleObject(ConsoleScreen* _Screen, ConsolePos _Pos, const char* _CharText)
	:Screen_(_Screen),
	Pos_(_Pos.x_, _Pos.y_),
	CharText_()
{
	if (nullptr == Screen_)
	{
		assert(false);
	}
	for (int i = 0; i < 3; i += 1)
	{
		CharText_[i] = _CharText[i];
	}
}

void ConsoleObject::Render()
{
	Screen_->SetPixel(Pos_, CharText_);
}

ConsoleObject::~ConsoleObject() 
{
}

