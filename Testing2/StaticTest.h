#pragma once

// Ό³Έν :
class StaticTest
{
public:
	static int SInt;
	// constrcuter destructer
	StaticTest();
	~StaticTest();

	// delete Function
	StaticTest(const StaticTest& _Other) = delete;
	StaticTest(StaticTest&& _Other) noexcept = delete;
	StaticTest& operator=(const StaticTest& _Other) = delete;
	StaticTest& operator=(StaticTest&& _Other) noexcept = delete;

protected:

private:

};

