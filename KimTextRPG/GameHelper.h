#pragma once
#include <iostream>
#include <random>

// Ό³Έν :
class GameHelper
{
private:

public:
	int RandomGenerator(int n);
public:
	// constrcuter destructer
	GameHelper();
	~GameHelper();

	// delete Function
	GameHelper(const GameHelper& _Other) = delete;
	GameHelper(GameHelper&& _Other) noexcept = delete;
	GameHelper& operator=(const GameHelper& _Other) = delete;
	GameHelper& operator=(GameHelper&& _Other) noexcept = delete;

protected:

private:

};

