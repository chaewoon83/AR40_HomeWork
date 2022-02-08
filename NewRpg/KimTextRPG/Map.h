#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>

class Monster;
class Player;
// ���� : ���� �� ���� ��ҵ��� ��ġ ����
class Map
{
private:
	char MapPrintArr[100][100];
	int MapArr[100][100];
public:
	void MapPrint(const int* NowPlayerPos_);
	void MapPrint(const int* PastPlayerPos_, const int* NowPlayerPos_);
	const int* PlayerMove(const int* PlayerPos_);
	bool IsFight(const int* PlayerPos_);
	int WhichMon(const int* PlayerPos_);
	bool IsTreasure(const int* PlayerPos_);
	void RemoveMonster(const int* PlayerPos_, bool IsGone_, Monster& Monster_);
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

