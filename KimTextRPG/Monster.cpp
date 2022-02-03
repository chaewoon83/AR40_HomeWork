#include "Monster.h"
#include <cstring>

void Monster::Damaged(int Damage_)
{
	Hp -= Damage_;
}
void Monster::Healed(int Heal_)
{
	Hp += Heal_;
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

void Monster::MonsInit(int MonNum_)
{
	setName(MonName[MonNum_]);
	setHp(MonStat[MonNum_][0]);
	setAtt(MonStat[MonNum_][1]);
	setLuck(MonStat[MonNum_][2]);
	setDef(MonStat[MonNum_][3]);
}


Monster::Monster()
	:Name(MonName[0]),
	Hp(MonStat[0][0]),
	Att(MonStat[0][1]),
	Luck(MonStat[0][2]),
	Def(MonStat[0][3])
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

