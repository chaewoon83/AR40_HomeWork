#include "GameHelper.h"

void GameHelper::TextResult(int PHp, int MHp, const char* PName, const char* MName)
{
	printf_s("==============================");
	printf_s("%s Hp : %d", PName, PHp);
	printf_s("%s Hp : %d", MName, MHp);
	printf_s("==============================");
}

GameHelper::GameHelper() 
{
}

GameHelper::~GameHelper() 
{
}

