#pragma once
char DefaultName[50] = "New Player";
int DefaultStat[10] = { 100, 5, 5, 3 };
class Player 
{
private:
	const char* Name;
	int Hp;
	int Att;
	int Luck;
	int Def;

public:
	void Damaged(int Damage_);
	void Healed(int Heal_);
public:
	const char* getName();
	int getHp();
	int getAtt();
	int getLuck();
	int getDef();
	void setName(const char* Name_);
	void setHp(int Hp_);
	void setAtt(int Att_);
	void setLuck(int Luck_);
	void setDef(int Def_);

	Player();
	Player(const char* Name_, int Hp_, int Att_, int Luck_, int Def_);

};

