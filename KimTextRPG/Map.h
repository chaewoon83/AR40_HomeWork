#pragma once
#include <iostream>
// Ό³Έν :
class Map
{
private:
	char MapArr[100][100];
public:
	Map(int H, int W);
public:
	// constrcuter destructer
	Map();
	~Map();

	//// delete Function
	//Map(const Map& _Other) = delete;
	//Map(Map&& _Other) noexcept = delete;
	//Map& operator=(const Map& _Other) = delete;
	//Map& operator=(Map&& _Other) noexcept = delete;

protected:

private:

};

