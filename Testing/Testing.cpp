#include <iostream>

class Player {
public:
	int Att_;
public:
	Player();
};

int main()
{
	Player NewPlayer = {};
	NewPlayer.Att_ = 10;
	NewPlayer.::Player::Att_ = 30;
	char char1 = 'a';
	char* charPtr = &char1;
	char* charPtrPtr = (char*)&charPtr;
	
	char* charResolve = (char*)*charPtrPtr;
	char charResolveResolve = *charResolve;
	
	return 0;
}

Player::Player()
	: Att_(20)
{
}
