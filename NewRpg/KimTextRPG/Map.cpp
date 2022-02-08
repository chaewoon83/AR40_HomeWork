#include "Map.h"

//1. Road
int MapRoad[8][8] =
{ {0, 0, 0, 0, 0, 0, 0} ,
  {0, 1, 0, 1, 1, 1, 0} ,
  {0, 1, 0, 0, 1, 1, 0} ,
  {0, 1, 1, 1, 0, 1, 0} ,
  {0, 1, 0, 1, 0, 1, 0} ,
  {0, 1, 0, 1, 1, 1, 0} ,
  {0, 0, 0, 0, 0, 0, 0} 
};

//1. Player, 2. treasure, 3. Fountain, 5. Monster
int MapExist[8][8] =
{ {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 5, 0, 0, 0} ,
  {0, 0, 0, 0, 2, 0, 0} ,
  {0, 5, 0, 0, 0, 5, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 2, 0, 5, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} };

//1. Treasure
int MaterialExist[8][8] =
{ {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 1, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 1, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} };

//1. Slime, 2. Skeleton, 3. Golem, 4. Dragon
int MonExist[8][8] =
{ {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 4, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 1, 0, 0, 0, 3, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 2, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} };

int PlayerExist[8][8] =
{ {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 0, 0, 0, 0} };

int Width = 7;
int Height = 7;

void Map::MapPrint(const int* PastPlayerPos_, const int* NowPlayerPos_)
{
	//¡á : Wall, ¡à : Road, ¡Û : Player, ¡Ù : Treasure, 
	char fullsquare[3] = "¡á";
	char emptysquare[3] = "¡à";
	char circle[3] = "¡Û";
	char star[3] = "¡Ù";
	char triangle[3] = "¡ä";
	PlayerExist[PastPlayerPos_[1]][PastPlayerPos_[0]] = 0;
	PlayerExist[NowPlayerPos_[1]][NowPlayerPos_[0]] = 1;
	for(int y = 0; y < Height; y += 1)
	{
		for (int x = 0; x < Width; x += 1)
		{
			if (PlayerExist[y][x] == 1)
			{
				MapPrintArr[y][2 * x] = circle[0];
				MapPrintArr[y][2 * x + 1] = circle[1];
			}
			else 
			{
				switch (MapExist[y][x])

				{
				case 0:
					if (MapRoad[y][x] == 1)
					{
						MapPrintArr[y][2 * x] = emptysquare[0];
						MapPrintArr[y][2 * x + 1] = emptysquare[1];
						break;
					}
					MapPrintArr[y][2 * x] = fullsquare[0];
					MapPrintArr[y][2 * x + 1] = fullsquare[1];
					break;
				case 5:
					MapPrintArr[y][2 * x] = triangle[0];
					MapPrintArr[y][2 * x + 1] = triangle[1];
					break;
				case 2:
					MapPrintArr[y][2 * x] = star[0];
					MapPrintArr[y][2 * x + 1] = star[1];
					break;
				}
			}
		}
		MapPrintArr[y][2 * Width] = '\n';
		MapPrintArr[y][2 * Width + 1] = 0;
	}
	for (int y = 0; y < Height; y += 1)
	{
	printf_s(MapPrintArr[y]);
	}

}

void Map::MapPrint(const int* NowPlayerPos_)
{
	//¡á : Wall, ¡à : Road, ¡Û : Player, ¡Ù : Treasure, 
	char fullsquare[3] = "¡á";
	char emptysquare[3] = "¡à";
	char circle[3] = "¡Û";
	char star[3] = "¡Ù";
	char triangle[3] = "¡ä";
	PlayerExist[NowPlayerPos_[1]][NowPlayerPos_[0]] = 1;
	for (int y = 0; y < Height; y += 1)
	{
		for (int x = 0; x < Width; x += 1)
		{
			if (PlayerExist[y][x] == 1)
			{
				MapPrintArr[y][2 * x] = circle[0];
				MapPrintArr[y][2 * x + 1] = circle[1];
			}
			else
			{
				switch (MapExist[y][x])

				{
				case 0:
					if (MapRoad[y][x] == 1)
					{
						MapPrintArr[y][2 * x] = emptysquare[0];
						MapPrintArr[y][2 * x + 1] = emptysquare[1];
						break;
					}
					MapPrintArr[y][2 * x] = fullsquare[0];
					MapPrintArr[y][2 * x + 1] = fullsquare[1];
					break;
				case 2:
					MapPrintArr[y][2 * x] = star[0];
					MapPrintArr[y][2 * x + 1] = star[1];
					break;
				case 5:
				case 6:
				case 7:
				case 8:
					MapPrintArr[y][2 * x] = triangle[0];
					MapPrintArr[y][2 * x + 1] = triangle[1];
					break;
				}
			}
		}
		MapPrintArr[y][2 * Width] = '\n';
		MapPrintArr[y][2 * Width + 1] = 0;
	}
	for (int y = 0; y < Height; y += 1)
	{
		printf_s(MapPrintArr[y]);
	}
	int a = 0;
}

const int* Map::PlayerMove(const int* PlayerPos_)
{
	int Move[2] = { 0,0 };
	Sleep(50);
	char c = 0;
	if (_getch() == 224)
	{
		switch (_getch())
		{
			//Left
		case 75:
			Move[0] -= 1;
			//printf_s("Move Left\n");
			break;
			//Right
		case 77:
			Move[0] += 1;
			//printf_s("Move Right\n");
			break;
			//Up
		case 72:
			Move[1] -= 1;
			//printf_s("Move Up\n");
			break;
			//Down
		case 80:
			Move[1] += 1;
			//printf_s("Move Down\n");
			break;
		}
	}
	else
	{
		printf_s("Please Enter Direction\n");
	}
	int PosChanged[2] = { 0,0 };
	PosChanged[0] = Move[0] + PlayerPos_[0];
	PosChanged[1] = Move[1] + PlayerPos_[1];
	MapRoad[1][1] == 1;
	switch (MapRoad[PosChanged[1]][PosChanged[0]])
	{
	case 0:
		PosChanged[0] -= Move[0];
		PosChanged[1] -= Move[1];
		printf_s("Player Blocked\n");
		break;
	case 1:
		if (Move[0] == 1)
		{
			printf_s("Player Moved Right\n");
		}
		if (Move[0] == -1)
		{
			printf_s("Player Moved Left\n");
		}
		if (Move[1] == 1)
		{
			printf_s("Player Moved Down\n");
		}
		if (Move[1] == -1)
		{
			printf_s("Player Moved Up\n");
		}
		break;
	default:
		printf_s("Error Occured Map::PlayerMove");
		break;
	}
	return PosChanged;
}

bool Map::IsFight(const int* PlayerPos_) 
{
	if (MapExist[PlayerPos_[1]][PlayerPos_[0]] >= 5)
	{
		return true;
	}
	return false;
}

int Map::WhichMon(const int* PlayerPos_)
{
	return MonExist[PlayerPos_[1]][PlayerPos_[0]];
}



bool Map::IsTreasure(const int* PlayerPos_)
{
	if (MapExist[PlayerPos_[1]][PlayerPos_[0]] == 0)
	{
		return true;
	}
	return false;
}

void Map::RemoveMonster(const int* PlayerPos_, bool IsGone_, Monster& Monster_)
{
	MapExist[PlayerPos_[1]][PlayerPos_[0]] = 0;
	MonExist[PlayerPos_[1]][PlayerPos_[0]] = 0;
}

Map::Map()
	:MapPrintArr(),
	MapArr()
{
}

Map::~Map() 
{
}

