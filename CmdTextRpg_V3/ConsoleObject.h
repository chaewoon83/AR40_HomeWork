#pragma once
#include "ConsoleMath.h"
#include "ConsoleScreen.h"

// Ό³Έν :
class ConsoleObject
{
public:
	// constrcuter destructer
	ConsoleObject(ConsoleScreen* _Screen, ConsolePos _Pos, const char* _CharText);
	~ConsoleObject();

	// delete Function
	ConsoleObject(const ConsoleObject& _Other) = delete;
	ConsoleObject(ConsoleObject&& _Other) noexcept = delete;
	ConsoleObject& operator=(const ConsoleObject& _Other) = delete;
	ConsoleObject& operator=(ConsoleObject&& _Other) noexcept = delete;

public:
	void Render();

protected:

private:
	ConsoleScreen* Screen_;
	ConsolePos Pos_;
	char CharText_[3];
};

