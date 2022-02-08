#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>

class Monster;
class Player;
// 설명 : 지도 및 게임 요소들의 위치 관리
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

