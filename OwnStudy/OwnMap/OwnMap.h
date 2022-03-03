#pragma once

// Ό³Έν :
class MyMap
{
public:
	// constrcuter destructer
	MyMap();
	~MyMap();

	// delete Function
	MyMap(const MyMap& _Other) = delete;
	MyMap(MyMap&& _Other) noexcept = delete;
	MyMap& operator=(const MyMap& _Other) = delete;
	MyMap& operator=(MyMap&& _Other) noexcept = delete;

protected:

private:

};

