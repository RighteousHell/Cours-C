#include "6.7.h"
void Move(char lab[][SIZE1], char *player, int *selector)
{
	static int vert = 4;
	static int gor = 15;

	switch (*selector)
	{
	case 2:
	{
		if (lab[vert + 1][gor] == ' ')
		{
			lab[vert][gor] = ' ';
			vert++;
			lab[vert][gor] = *player;

		}
		else break;
		break;
	}
	case 1:
	{
		if (lab[vert - 1][gor] == ' ')
		{
			lab[vert][gor] = ' ';
			vert--;
			lab[vert][gor] = *player;

		}
		else break;
		break;
	}
	case 3:
	{
		if (lab[vert][gor + 1] == ' ')
		{
			lab[vert][gor] = ' ';
			gor++;
			lab[vert][gor] = *player;

		}
		else break;
		break;
	}
	case 4:
	{
		if (lab[vert][gor - 1] == ' ')
		{
			lab[vert][gor] = ' ';
			gor--;
			lab[vert][gor] = *player;

		}
		else break;
		break;
	}
	}


}