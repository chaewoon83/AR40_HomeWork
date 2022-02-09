#pragma once
#include "ConsoleMath.h"

// ���� :
class Player
{
public:
	// constrcuter destructer
	Player();
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _Other) noexcept = delete;

	// ������ �ܼ��� �Լ��� ���� cpp�� �������� �ʾƵ� �������ϴ�.
	ConsoleVector GetPos() 
	{
		return Pos;
	}

protected:

private:
	ConsoleVector Pos;
	// ���� ���̴�.
	char Text[3];
};

