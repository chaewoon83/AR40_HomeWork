#include "FightZone.h"

void FightZone::Fight(Player& Player_, Monster& Monster_)
{
	while (Player_.getHp() > 0 && Monster_.getHp() > 0)
	{
		Monster_.Damaged(Player_.getAtt);

		{
			printf_s("==============================");
			printf_s("%s Hp : %d", Player_.getName(), Player_.getHp());
			printf_s("%s Hp : %d", Monster_.getName(), Monster_.getHp());
			printf_s("==============================");
			printf_s("%s Dealt %d Damage to %s", Player_.getName(), Player_.getAtt(), Monster_.getName());
		}
		Player
		{
			printf_s("==============================");
			printf_s("%s Hp : %d", Player_.getName(), Player_.getHp());
			printf_s("%s Hp : %d", Monster_.getName(), Monster_.getHp());
			printf_s("==============================");
			printf_s("%s Dealt %d Damage to %s", Monster_.getName(), Monster_.getAtt(), Player_.getName());		}
	}
}

FightZone::FightZone() 
{
}

FightZone::~FightZone() 
{
}

