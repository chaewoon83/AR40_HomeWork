#pragma once
#include <iostream>

// Ό³Έν :
class GameHelper
{
private:

public:
	void TextResult(int PHp, int MHp, const char* PName, const char* MName);
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

