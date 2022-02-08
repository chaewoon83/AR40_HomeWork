#pragma once 

class Monster
{
private:
	const char* Name;
	int Hp;
	int Att;
	int Luck;
	int Def;
	int Speed;

public:
	void Damaged(int Damage_);
	void Healed(int Heal_);
	bool IsDeath();
public:
	const char* getName();
	int getHp();
	int getAtt();
	int getLuck();
	int getDef();
	int getSpeed();
	void setName(const char* Name_);
	void setHp(int Hp_);
	void setAtt(int Att_);
	void setLuck(int Luck_);
	void setDef(int Def_);
	void setSpeed(int Speed_);
	void MonsInit(int MonNum_);

	Monster();
	Monster(int MonNum_);

};