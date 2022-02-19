#pragma once
#include <iostream>
#include <assert.h>
#include "ConsoleMath.h"



// Ό³Έν :
class ConsoleScreen
{
public:
	// constrcuter destructer
	ConsoleScreen(int _Width, int _Height, const char* _DefaultText);
	~ConsoleScreen();

	// delete Function
	ConsoleScreen(const ConsoleScreen& _Other) = delete;
	ConsoleScreen(ConsoleScreen&& _Other) noexcept = delete;
	ConsoleScreen& operator=(const ConsoleScreen& _Other) = delete;
	ConsoleScreen& operator=(ConsoleScreen&& _Other) noexcept = delete;

public:
	void CreateNewScreen(int _Width, int _Height, const char* _DefaultText);
	void SetDefaultText();
	void SetPixel(ConsolePos _Pos, const char* _InputText);
	void PrintScreen();

protected:

private:
	char** MainText_;
	char DefaultText_[3];
	ConsolePos Size_;
};

