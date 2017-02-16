#include "Source.h"
/*Function is governed by the time between 
iterations of a fractal rendering.*/
void wait(int ms) {
	int c = clock() + ms;
	while (clock()<c);
}

//Filling an array of logic zeros.
void Erase(fract *f) {
	for (int x = 0; x<SIZE; x++) {
		for (int y = 0; y<SIZE; y++) {
			f->pole[x][y] = false;
		}
	}
}
//
void DrawSnowflake(int x, int y, int start_distance, fract *f, int deep) {
	f->pole[x][y] = true;
	if (start_distance>1) {
		f->pole[x + 1][y] = true;
		f->pole[x - 1][y] = true;
		f->pole[x][y + 1] = true;
		f->pole[x][y - 1] = true;
	}
	if (start_distance>0) {
		int newsize = start_distance / 2 - 1;
		DrawSnowflake(x + newsize, y, newsize, f, deep + 1);
		DrawSnowflake(x - newsize, y, newsize, f, deep + 1);
		DrawSnowflake(x, y + newsize, newsize, f, deep + 1);
		DrawSnowflake(x, y - newsize, newsize, f, deep + 1);
		DrawSnowflake(x, y, newsize, f, deep);
	}
	else {
		return;
	}
}

void Print(fract *f) {
	for (int x = 0; x<SIZE; x++) {
		for (int y = 0; y<SIZE; y++) {
			if (f->pole[x][y] == true)
				printf("%c ", '*');
			else
				printf("%c ", ' ');
		}
		printf("\n");
	}
}
