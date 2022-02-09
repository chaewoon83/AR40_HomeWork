#include "TextScreen.h"
#include <iostream>

TextScreen::TextScreen() 
	: PixelData_(nullptr)
	, Width_(0)
	, Height_(0)
	, DefaultPixel_() // 사실 해줄필요가 없다.
{
}

TextScreen::~TextScreen() 
{
	for (int i = 0; i < Height_; i++)
	{
		if (nullptr != PixelData_)
		{
			delete[] PixelData_[i];
			PixelData_[i] = nullptr;
		}
	}

	if (nullptr != PixelData_)
	{
		delete[] PixelData_;
		PixelData_ = nullptr;
	}
}

void TextScreen::CreateScreen(int _Width, int _Height, const char* _DefaultValue)
{
	Width_ = _Width;
	Height_ = _Height;

	for (int i = 0; i < 3; i++)
	{
		DefaultPixel_[i] = _DefaultValue[i];
	}

	int RealWidth = Width_ * 2;
	RealWidth += 2;

	PixelData_ = new char*[Height_];

	for (int i = 0; i < Height_; i++)
	{
		PixelData_[i] = new char[RealWidth];
	}
}

void TextScreen::PrintScreen() 
{
	int RealWidth = Width_ * 2;
	RealWidth += 1;

	for (int y = 0; y < Height_; y++)
	{
		for (int x = 0; x < Width_; x++)
		{
			for (int i = 0; i < 2; i++)
			{
				PixelData_[y][(x * 2) + i] = DefaultPixel_[i];
			}
		}
		PixelData_[y][(Width_ * 2)] = '\n';
		PixelData_[y][(Width_ * 2) + 1] = 0;
	}

	for (int y = 0; y < Height_; y++)
	{
		// char*
		printf_s(PixelData_[y]);
	}
}


void TextScreen::SetPixel(ConsoleVector _Pos, const char* _DefaultValue) 
{
	SetPixel(_Pos.X, _Pos.Y, _DefaultValue);
}

void TextScreen::SetPixel(int _X, int _Y, const char* _DefaultValue) 
{
	// 기본자료형을 사용한 함수에 진짜 내용을 놓고
}