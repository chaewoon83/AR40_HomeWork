#include "Player.h"
#include <cstring>

void Player::Damaged(int Damage_)
{
	Hp -= Damage_;
}

void Player::Healed(int Heal_)
{
	Hp += Heal_;
}

const char* Player::getName()
{
	return Name;
}

int Player::getHp()
{
	return Hp;
}

int Player::getAtt()
{
	return Att;
}

int Player::getLuck()
{
	return Luck;
}

int Player::getDef()
{
	return Def;
}

void Player::setName(const char* Name_)
{
	Name = Name_;
}

void Player::setHp(int Hp_)
{
	Hp = Hp_;
}

void Player::setAtt(int Att_)
{
	Att = Att_;
}

void Player::setLuck(int Luck_)
{
	Luck = Luck_;
}

void Player::setDef(int Def_)
{
	Def = Def_;
}


Player::Player()
	:Name(DefaultName),
	Hp(DefaultStat[0]),
	Att(DefaultStat[1]),
	Luck(DefaultStat[2]),
	Def(DefaultStat[3])

{
}

Player::Player(const char* Name_, int Hp_, int Att_, int Luck_, int Def_)
	:Name(Name_),
	Hp(Hp_),
	Att(Att_),
	Luck(Luck_),
	Def(Def_)

{
}

