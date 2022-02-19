#include "Player.h"

Player::Player(ConsoleScreen* _Screen, int _x, int _y, const char* _CharText)
	:ConsoleObject(_Screen, ConsolePos(_x, _y), _CharText)
{
}

void Player::Move()
{
	int tempbuffer = _getch();

	switch (tempbuffer)
	{
	case'W':
	case'w':
		
	}
}

Player::~Player() 
{
}

