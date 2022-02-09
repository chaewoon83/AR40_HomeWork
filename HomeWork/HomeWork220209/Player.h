#pragma once
#include "ConsoleMath.h"

// 설명 :
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

	// 굉장히 단순한 함수는 굳이 cpp에 구현하지 않아도 괜찮습니다.
	ConsoleVector GetPos() 
	{
		return Pos;
	}

protected:

private:
	ConsoleVector Pos;
	// 내가 별이다.
	char Text[3];
};

