#include "GameHelper.h"

int GameHelper::RandomGenerator(int n)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, n-1);
	int result = dis(gen);
	return result;
}

GameHelper::GameHelper() 
{
}

GameHelper::~GameHelper() 
{
}

