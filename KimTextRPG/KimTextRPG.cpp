// KimTextRPG.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Fightzone.h"
#include "Player.h"
#include "Monster.h"
#include "Skills.h"
#include "Map.h"



int main()
{
    Map NewMap = Map();

    Player NewPlayer = Player("Assortrock", 300, 4, 10, 10, 10);
    Monster NewMonster[4] = {1,2,3,4};
    Skills NewSkills = {};
    FightZone NewFightZone = {};
    NewMap.MapPrint(NewPlayer.getPos());
    while (true)
    {
        int tempPlayerPos[2] = {};
        tempPlayerPos[0] = NewPlayer.getPos()[0];
        tempPlayerPos[1] = NewPlayer.getPos()[1];
        NewPlayer.setPos(NewMap.PlayerMove(NewPlayer.getPos()));
        NewMap.MapPrint(tempPlayerPos, NewPlayer.getPos());
        printf_s("%d\n",NewMap.IsFight(NewPlayer.getPos()));
        int MonIndex = NewMap.IsFight(NewPlayer.getPos());
        if (MonIndex != 0)
        {
            NewFightZone.Fight(NewPlayer, NewMonster[MonIndex - 4], NewSkills);
        }
    }

}
