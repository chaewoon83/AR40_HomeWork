#include "ConsoleScreen.h"

ConsoleScreen::ConsoleScreen(int _Width, int _Height, const char* _DefaultText)
	:Size_(_Width,_Height)
{
	if (nullptr == _DefaultText)
	{
		assert(false);
	}
	for (int i = 0; i < 3; i += 1)
	{
		DefaultText_[i] = _DefaultText[i];
	}
	CreateNewScreen(_Width, _Height, _DefaultText);
}

ConsoleScreen::~ConsoleScreen() 
{
}

void ConsoleScreen::CreateNewScreen(int _Width, int _Height, const char* _DefaultText)
{
	MainText_ = new char* [_Height];
	for (int i = 0; i < _Height; i += 1)
	{
		MainText_[i] = new char [2*_Width + 1];
	}
}

void ConsoleScreen::SetDefaultText()
{
	for (int h = 0; h < Size_.x_; h += 1)
	{
		for (int w = 0; w < Size_.y_; w += 1)
		{
			MainText_[h][2 * w] = DefaultText_[0];
			MainText_[h][2 * w + 1] = DefaultText_[1];
		}
		MainText_[h][2 * Size_.y_] = '\n';
		MainText_[h][2 * Size_.y_ + 1] = 0;
	}
}

void ConsoleScreen::SetPixel(ConsolePos _Pos, const char* _InputText)
{
	if (nullptr == _InputText)
	{
		assert(false);
	}
	MainText_[_Pos.y_][2 * _Pos.x_] = _InputText[0];
	MainText_[_Pos.y_][2 * _Pos.x_ + 1] = _InputText[1];
}

void ConsoleScreen::PrintScreen()
{
	system("cls");
	for (int h = 0; h < Size_.x_; h += 1)
	{
		std::cout << MainText_[h];
	}
}


