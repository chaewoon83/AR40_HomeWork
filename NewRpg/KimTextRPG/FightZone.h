#pragma once
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Monster.h"
#include "Skills.h"
// Ό³Έν :
class FightZone
{
private:

public:
	void Fight(Player& Player_, Monster& Monster_, Skills& Skills_);
public:
	// constrcuter destructer
	FightZone();
	~FightZone();

	// delete Function
	FightZone(const FightZone& _Other) = delete;
	FightZone(FightZone&& _Other) noexcept = delete;
	FightZone& operator=(const FightZone& _Other) = delete;
	FightZone& operator=(FightZone&& _Other) noexcept = delete;

protected:

private:

};

