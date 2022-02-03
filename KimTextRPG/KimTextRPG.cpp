// KimTextRPG.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Fightzone.h"
#include "Player.h"
#include "Monster.h"



int main()
{
    Player NewPlayer = Player("Assortrock", 100, 10, 10, 10);
    Monster NewMonster = Monster(0);
 
    FightZone NewFightZone = {};
    NewFightZone.Fight(NewPlayer, NewMonster);
    return 0;
}
