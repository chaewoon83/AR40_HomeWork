#include "Player.h"
#include <cstring>

char DefaultName[50] = "New Player";
int DefaultStat[10] = { 100, 5, 5, 3 , 5 };

void Player::Damaged(int Damage_)
{
	Hp -= Damage_;
}

void Player::Healed(int Heal_)
{
	Hp += Heal_;
}

bool Player::IsDeath()
{
	return (Hp <= 0);
}

void Player::Move()
{

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

int Player::getSpeed()
{
	return Speed;
}

const int* Player::getPos()
{
	return Position;
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

void Player::setSpeed(int Speed_)
{
	Speed = Speed_;
}

void Player::setPos(const int* Pos_)
{
	Position[0] = Pos_[0];
	Position[1] = Pos_[1];
}


Player::Player()
	:Name(DefaultName),
	Hp(DefaultStat[0]),
	Att(DefaultStat[1]),
	Luck(DefaultStat[2]),
	Def(DefaultStat[3]),
	Speed(DefaultStat[4]),
	Position{1, 1}

{
}

Player::Player(const char* Name_, int Hp_, int Att_, int Luck_, int Def_, int Speed_)
	:Name(Name_),
	Hp(Hp_),
	Att(Att_),
	Luck(Luck_),
	Def(Def_),
	Speed(Speed_),
	Position{1, 1}
{
}

