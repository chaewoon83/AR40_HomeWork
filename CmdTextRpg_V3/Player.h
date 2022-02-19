#pragma once
#include <conio.h>
#include "ConsoleObject.h"

// Ό³Έν :
class Player : public ConsoleObject
{
public:
	// constrcuter destructer
	Player(ConsoleScreen* _Screen, int x_, int y_, const char* _CharText);
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _Other) noexcept = delete;

public:
	void Move();

protected:

private:
};

