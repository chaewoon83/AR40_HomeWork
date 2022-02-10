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

class ConsolePos
{
public:
	// constrcuter destructer
	ConsolePos();
	~ConsolePos();

	// delete Function
	ConsolePos(const ConsolePos& _Other) = delete;
	ConsolePos(ConsoleMath&& _Other) noexcept = delete;
	ConsolePos& operator=(const ConsolePos& _Other) = delete;
	ConsolePos& operator=(ConsolePos&& _Other) noexcept = delete;

protected:

private:
	int x_;
	int y_;
};

