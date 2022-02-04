#include "Monster.h"
#include <cstring>

char MonName[10][50] = { "Default Monster", "Slime", "Skeleton", "Golem", "Dragon" };
//"Hp, Att, Luck, Def" in order
int MonStat[10][10] = { { 10, 1, 1, 1 , 1 }, { 10, 4, 1, 0, 3 },
	{ 20, 5, 3, 2, 4}, { 25, 6, 5, 3, 5 }, { 50, 10, 7, 5, 7 } };

void Monster::Damaged(int Damage_)
{
	Hp -= Damage_;
}
void Monster::Healed(int Heal_)
{
	Hp += Heal_;
}
bool Monster::IsDeath()
{
	return (Hp <= 0);
}

const char* Monster::getName()
{
	return Name;
}

int Monster::getHp()
{
	return Hp;
}

int Monster::getAtt()
{
	return Att;
}

int Monster::getLuck()
{
	return Luck;
}

int Monster::getDef()
{
	return Def;
}

int Monster::getSpeed()
{
	return Speed;
}

void Monster::setName(const char* Name_)
{
	Name = Name_;
}

void Monster::setHp(int Hp_)
{
	Hp = Hp_;
}

void Monster::setAtt(int Att_)
{
	Att = Att_;
}

void Monster::setLuck(int Luck_)
{
	Luck = Luck_;
}

void Monster::setDef(int Def_)
{
	Def = Def_;
}

void Monster::setSpeed(int Speed_)
{
	Speed = Speed_;
}

void Monster::MonsInit(int MonNum_)
{
	Name = MonName[MonNum_];
	Hp = MonStat[MonNum_][0];
	Att = MonStat[MonNum_][1];
	Luck = MonStat[MonNum_][2];
	Def = MonStat[MonNum_][3];
	Speed = MonStat[MonNum_][4];
}


Monster::Monster()
	:Name(MonName[0]),
	Hp(MonStat[0][0]),
	Att(MonStat[0][1]),
	Luck(MonStat[0][2]),
	Def(MonStat[0][3]),
	Speed(MonStat[0][4])
{
}

Monster::Monster(int MonNum_)
{
	switch(MonNum_)
	{
	case 1:
		MonsInit(1);
		break;
	case 2:
		MonsInit(2);
		break;
	case 3:
		MonsInit(3);
		break;
	case 4:
		MonsInit(4);
		break;
	default:
		MonsInit(0);
	}
}

