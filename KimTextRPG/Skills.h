#pragma once
#include "GameHelper.h"

// Ό³Έν :
class Skills
{
private:
	GameHelper GHelper;
public:
	int BaseAttack(int Att_);
	int ChargedAttack(int Att_);
	int MagicAttack(int Att_);
	int RandomAttack(int Att_);

public:
	// constrcuter destructer
	Skills();
	~Skills();

	// delete Function
	Skills(const Skills& _Other) = delete;
	Skills(Skills&& _Other) noexcept = delete;
	Skills& operator=(const Skills& _Other) = delete;
	Skills& operator=(Skills&& _Other) noexcept = delete;

protected:

private:

};

