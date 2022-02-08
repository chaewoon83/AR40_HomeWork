#include <iostream>

int Position[2][2] = { {1,2}, {3,4} };
class Player {
public:
	int Att_;
public:
	Player();
	void Move(const int* Pos);
};

int main()
{
	Player NewPlayer = {};
	//NewPlayer.Att_ = 10;
	//NewPlayer.::Player::Att_ = 30;
	//char char1 = 'a';
	//char* charPtr = &char1;
	//char* charPtrPtr = (char*)&charPtr;
	//
	//char* charResolve = (char*)*charPtrPtr;
	//char charResolveResolve = *charResolve;
	int P[3] = {1,1};
	NewPlayer.Move(P);

	return 0;
}

Player::Player()
	: Att_(20)
{
}
void Player::Move(const int* Pos)
{
	int k = Pos[0];
	int c = Pos[1];
	int b = Position[Pos[0]][ Pos[1]];
	int a = 0;
}
