#pragma once

class Player 
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

	Player();
	Player(const char* Name_, int Hp_, int Att_, int Luck_, int Def_, int Speed);

};

