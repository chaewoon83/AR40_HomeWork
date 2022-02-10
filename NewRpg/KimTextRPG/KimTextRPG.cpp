// KimTextRPG.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <Windows.h>
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
    //NewMap.MapPrint(NewPlayer.getPos());
    while (true)
    {
        int PastPlayerPos[2] = {};
        PastPlayerPos[0] = NewPlayer.getPos()[0];
        PastPlayerPos[1] = NewPlayer.getPos()[1];
        NewPlayer.setPos(NewMap.PlayerMove(NewPlayer.getPos()));
        int NowPlayerPos[2] = {};
        NowPlayerPos[0] = NewPlayer.getPos()[0];
        NowPlayerPos[1] = NewPlayer.getPos()[1];
        NewMap.MapPrint(PastPlayerPos, NowPlayerPos);

        if (NewMap.IsFight(NowPlayerPos))
        {
            NewFightZone.Fight(NewPlayer, NewMonster[NewMap.WhichMon(NowPlayerPos)], NewSkills);
        }
    }

}
