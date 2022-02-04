#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>

// 설명 : 지도 및 게임 요소들의 위치 관리
class Map
{
private:
	char MapPrintArr[100][100];
	int MapArr[100][100];
public:
	void MapPrint(const int* NowPlayerPos);
	void MapPrint(const int* PastPlayerPos, const int* NowPlayerPos);
	const int* PlayerMove(const int* PlayerPos);
	int IsFight(const int* PlayerPos);
	bool IsTreasure(const int* PlayerPos);
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

