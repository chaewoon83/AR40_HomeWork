#include "ConsoleObject.h"

ConsoleObject::ConsoleObject(
	TextScreen* _Screen,
	const char* _Text,
	const ConsoleVector& _Pos
	)
	: Screen_(_Screen)
	, Pos_(_Pos)
{
	//if (nullptr == _Screen)
	//{
	//	assert(false);
	//}

	if (nullptr == _Text)
	{
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		Text_[i] = _Text[i];
	}
}

ConsoleObject::~ConsoleObject() 
{
}

void ConsoleObject::Render() 
{
	if (nullptr == Screen_)
	{
		assert(false);
	}

	Screen_->SetPixel(Pos_, Text_);
}


bool ConsoleObject::IsBlocked (ConsoleVector Pos_)
{
	if (0 > Pos_.x_ &&
		Pos_.x_ > 10 &&
		0 > Pos_.y_ &&
		Pos_.y_ > 10)
	{
		return false;
	}
	return true;
}