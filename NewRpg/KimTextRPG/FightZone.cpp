#include "FightZone.h"

void FightZone::Fight(Player& Player_, Monster& Monster_, Skills& Skills_)
{
	while (Player_.getHp() > 0 && Monster_.getHp() > 0)
	{
		system("cls");
		Monster_.Damaged(Skills_.BaseAttack(Player_.getAtt()));
		if (Monster_.getHp() < 0)
		{
			Monster_.setHp(0);
		}
		{
			printf_s("==============================\n");
			printf_s("%s Hp : %d\n", Player_.getName(), Player_.getHp());
			printf_s("%s Hp : %d\n", Monster_.getName(), Monster_.getHp());
			printf_s("==============================\n");
			printf_s("%s Dealt %d Damage to %s\n", Player_.getName(), Player_.getAtt(), Monster_.getName());
		}

		_getch();

		if (Monster_.IsDeath())
		{
			break;
		}
		system("cls");
		int MonsterDamage = Skills_.RandomAttack(Monster_.getAtt());

		Player_.Damaged(MonsterDamage);
		if (Player_.getHp() < 0)
		{
			Player_.setHp(0);
		}
		{
			printf_s("==============================\n");
			printf_s("%s Hp : %d\n", Player_.getName(), Player_.getHp());
			printf_s("%s Hp : %d\n", Monster_.getName(), Monster_.getHp());
			printf_s("==============================\n");
			printf_s("%s Dealt %d Damage to %s\n", Monster_.getName(), MonsterDamage, Player_.getName());
		}
		_getch();

		if (Player_.IsDeath())
		{
			break;
		}
	}
}

FightZone::FightZone() 
{
}

FightZone::~FightZone() 
{
}

