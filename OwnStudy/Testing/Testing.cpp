#include <iostream>

int Position[2][2] = { {1,2}, {3,4} };
class Player {
public:
	int Att_;
	int Att_1;
	int Att_2;
	int Att_3;
	int Att_4;
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

	int ExInt[3] = {0,1,2};

	{
		int num1 = 1;
		int num2 = 2;
		int& ref = num1; // ref와 num1은 같음
		ref = num2;
		int a = 0;
	}

	{
		Player NewPlayer;
	}
	{
		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
		int* Arr1 = new int[3];
		int* Arr2 = Arr1;
		Arr1 = new int[3];
		delete Arr2;
		delete[] Arr1;
		int a = 0;
	}

	{
		int a = 3;
		int* const Arr2 = &a;
		int* Arr3 = &a;
		*Arr2 = 2;
		//Arr2 = Arr3;
	}
	{
		int Mint0 = 3;
		int* Mint0Ptr = &Mint0;
		int& Mint0Ref = Mint0;
		Player NewPlayer;
		Player& NPRef = NewPlayer;
		Player* NPPtr = &NewPlayer;

		int a = sizeof(Mint0Ref);
		int b = sizeof(Mint0Ptr);
		int a1 = sizeof(NPRef);
		int b1 = sizeof(NPPtr);

		int c = 0;
	}

	return 0;
}

Player::Player()
	: Att_(20)
{
	std::cout << "생성자" << std::endl;
}
void Player::Move(const int* Pos)
{
	int k = Pos[0];
	int c = Pos[1];
	int b = Position[Pos[0]][ Pos[1]];
	int a = 0;
}

