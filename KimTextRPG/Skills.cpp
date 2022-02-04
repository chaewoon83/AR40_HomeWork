#include "Skills.h"

Skills::Skills() 
{

}

Skills::~Skills() 
{

}

int Skills::BaseAttack(int Att_)
{
	return Att_;
}

int Skills::ChargedAttack(int Att_)
{
	return Att_ * 2;
}

int Skills::MagicAttack(int Att_)
{
	return Att_ * 3;
}

int Skills::RandomAttack(int Att_)
{
	int RNumber = GHelper.RandomGenerator(3);
	switch(RNumber)
	{
	case 0:
		return BaseAttack(Att_);
	case 1:
		return ChargedAttack(Att_);
	case 2:
		return MagicAttack(Att_);
	default:
		return BaseAttack(Att_);
	}
	return 0;
}
