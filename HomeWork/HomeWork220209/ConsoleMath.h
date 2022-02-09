#pragma once

// Ό³Έν :
class ConsoleMath
{
public:
	// constrcuter destructer
	ConsoleMath();
	~ConsoleMath();

	// delete Function
	ConsoleMath(const ConsoleMath& _Other) = delete;
	ConsoleMath(ConsoleMath&& _Other) noexcept = delete;
	ConsoleMath& operator=(const ConsoleMath& _Other) = delete;
	ConsoleMath& operator=(ConsoleMath&& _Other) noexcept = delete;

protected:

private:

};


class ConsoleVector
{
public:
	int X;
	int Y;

	//        X Y
	// Player 0 0 
	//        1 0 
	//        1 0

public:
	ConsoleVector operator+(const ConsoleVector& _Other) 
	{
		ConsoleVector Result;
		Result.X = X + _Other.X;
		Result.Y = Y + _Other.Y;
		return Result;
	}

	ConsoleVector& operator+=(const ConsoleVector& _Other)
	{
		X += _Other.X;
		Y += _Other.Y;
		return *this;
	}
};
