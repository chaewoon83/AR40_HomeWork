// 220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Pos
{
private:
	int X;
	int Y;
public:
	int getX()
	{
		return this->X;
	}
	int getY() 
	{
		return this->Y;
	}
	
	Pos operator+= (/*Pos* this, */const Pos& _Other)
	{
		X = X + _Other.X;
		Y =	Y + _Other.Y;
		return *this;
	}

	Pos(int _X, int _Y)
		:X(_X),
		 Y(_Y)
	{
		
	}

	Pos()
		:X(0),
		 Y(0)
	{

	}
};

int main()
{
	Pos PlayerPos = {};
	Pos MovePos = {1, 1};

	int Value = {};

	(Value += 1) += 10;
	
	(PlayerPos += MovePos) += {1,1};

	int a = 0;

}
