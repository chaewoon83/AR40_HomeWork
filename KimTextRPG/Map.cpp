#include "Map.h"

Map::Map(int H, int W)
	:MapArr()
{
	for (int Y = 0; Y <= W; Y++)
	{
		MapArr[0][2 * Y] = '3';
	}
	printf_s(MapArr[0]);
	int a = 0;
}

Map::Map() 
{
}

Map::~Map() 
{
}

