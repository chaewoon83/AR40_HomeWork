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
//1. Player, 2. treasure, 3. Fountain, 5. Slime, 6. Skeleton, 7. Golem, 8. Dragon
int MapExist[8][8] =
{ {0, 0, 0, 0, 0, 0, 0} ,
  {0, 0, 0, 8, 0, 0, 0} ,
  {0, 0, 0, 0, 2, 0, 0} ,
  {0, 5, 0, 0, 0, 7, 0} ,
  {0, 0, 0, 0, 0, 0, 0} ,
  {0, 2, 0, 6, 0, 0, 0} ,
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


void Map::MapPrint(const int* PastPlayerPos, const int* NowPlayerPos)
{
	//¡á : Wall, ¡à : Road, ¡Û : Player, ¡Ù : Treasure, 
	char fullsquare[3] = "¡á";
	char emptysquare[3] = "¡à";
	char circle[3] = "¡Û";
	char star[3] = "¡Ù";
	char triangle[3] = "¡ä";
	PlayerExist[PastPlayerPos[1]][PastPlayerPos[0]] = 0;
	PlayerExist[NowPlayerPos[1]][NowPlayerPos[0]] = 1;
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

void Map::MapPrint(const int* NowPlayerPos)
{
	//¡á : Wall, ¡à : Road, ¡Û : Player, ¡Ù : Treasure, 
	char fullsquare[3] = "¡á";
	char emptysquare[3] = "¡à";
	char circle[3] = "¡Û";
	char star[3] = "¡Ù";
	char triangle[3] = "¡ä";
	PlayerExist[NowPlayerPos[1]][NowPlayerPos[0]] = 1;
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

const int* Map::PlayerMove(const int*PlayerPos)
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
	PosChanged[0] = Move[0] + PlayerPos[0];
	PosChanged[1] = Move[1] + PlayerPos[1];
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
			printf_s("Player Moved Up\n");
		}
		if (Move[1] == -1)
		{
			printf_s("Player Moved Down\n");
		}
		break;
	default:
		printf_s("Error Occured Map::PlayerMove");
		break;
	}
	return PosChanged;
}

int Map::IsFight(const int* PlayerPos) 
{
	if (MapExist[PlayerPos[1]][PlayerPos[0]] >= 5)
	{
		return MapExist[PlayerPos[1]][PlayerPos[0]];
	}
	return 0;
}

bool Map::IsTreasure(const int* PlayerPos)
{
	if (MapExist[PlayerPos[1]][PlayerPos[0]] == 0)
	{
		return true;
	}
	return false;
}

Map::Map()
	:MapPrintArr(),
	MapArr()
{
}

Map::~Map() 
{
}

