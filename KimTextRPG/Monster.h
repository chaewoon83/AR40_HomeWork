
char MonName[10][50] = { "Default Monster", "Slime", "Skeleton", "Golem", "Dragon" };
//"Hp, Att, Luck, Def" in order
int MonStat[10][10] = { { 10, 1, 1, 1 }, { 10, 4, 1, 0 }, { 20, 5, 3, 2 }, { 25, 6, 5, 3 }, { 50, 10, 7, 5 } };
class Monster
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
	void MonsInit(int MonNum_);

	Monster();
	Monster(int MonNum_);

};