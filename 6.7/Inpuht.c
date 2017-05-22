#include "6.7.h"
void Inpuht(char lab[][SIZE1], char *player)
{

	FILE* labirint = fopen("labirint.txt", "r");
	for (int i = 0; i <= SIZE2 - 1; i++)
	{
		fgets(lab[i], SIZE1, labirint);
	}
	lab[4][15] = *player;
	fclose (labirint);
}