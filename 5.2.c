#include <stdio.h>
#include <stdbool.h>
#define QUATER 10

struct KAL {
	bool leftUp[QUATER][QUATER];
	bool rightUp[QUATER][QUATER];
	bool leftDown[QUATER][QUATER];
	bool rightDown[QUATER][QUATER];
};
typedef struct KAL KAL;
void wait(int ms) {
	int c = clock() + ms;
	while (clock()<c);
}

void Print(KAL *k) {
	for (int x = 0; x<QUATER; x++) {
		for (int y = 0; y<QUATER; y++) {
			if (k->leftUp[x][y] == false) {
				printf("%c ", ' ');
			}
			else {
				printf("%c ", '*');
			}
		}
		for (int y = 0; y<QUATER; y++) {
			if (k->rightUp[x][y] == false) {
				printf("%c ", ' ');
			}
			else {
				printf("%c ", '*');
			}
		}
		printf("\n");
	}
	for (int x = 0; x<QUATER; x++) {
		for (int y = 0; y<QUATER; y++) {
			if (k->leftDown[x][y] == false) {
				printf("%c ", ' ');
			}
			else {
				printf("%c ", '*');
			}
		}
		for (int y = 0; y<QUATER; y++) {
			if (k->rightDown[x][y] == false) {
				printf("%c ", ' ');
			}
			else {
				printf("%c ", '*');
			}
		}
		printf("\n");
	}
}

void Reflection(bool r1[QUATER][QUATER], bool r2[QUATER][QUATER], char flag) {
	if (flag == 'v') {
		for (int x = 0; x <= QUATER; x++) {
			for (int y = 0; y <= QUATER; y++) {
				r2[x][y] = r1[x][QUATER - y];
			}
		}
	}
	else if (flag == 'h') {
		for (int x = 0; x <= QUATER; x++) {
			for (int y = 0; y <= QUATER; y++) {
				r2[x][y] = r1[QUATER - x][y];
			}
		}
	}
}

void NewPattern(KAL *k) {
	for (int x = 1; x<QUATER; x++) {
		for (int y = 1; y<x; y++) {
			int r = rand() % 2;
			if (r == 0) {
				k->leftUp[x][y] = false;
				k->leftUp[y][x] = false;
			}
			else {
				k->leftUp[x][y] = true;
				k->leftUp[y][x] = true;
			}
		}
	}
	Reflection(k->leftUp, k->rightUp, 'v');
	Reflection(k->rightUp, k->rightDown, 'h');
	Reflection(k->leftUp, k->leftDown, 'h');
}

void init(KAL *k) {
	for (int x = 0; x <= QUATER; x++) {
		for (int y = 0; y <= QUATER; y++) {
			k->leftUp[x][y] = (KAL*)malloc(1 * sizeof(bool));
			k->leftUp[x][y] = false;
		}
	}
	for (int x = 0; x <= QUATER; x++) {
		for (int y = 0; y <= QUATER; y++) {
			k->leftDown[x][y] = (KAL*)malloc(1 * sizeof(bool));
			k->leftDown[x][y] = false;
		}
	}
	for (int x = 0; x <= QUATER; x++) {
		for (int y = 0; y <= QUATER; y++) {
			k->rightUp[x][y] = (KAL*)malloc(1 * sizeof(bool));
			k->rightUp[x][y] = false;
		}
	}
	for (int x = 0; x <= QUATER; x++) {
		for (int y = 0; y <= QUATER; y++) {
			k->rightDown[x][y] = (KAL*)malloc(1*sizeof(bool));
			k->rightDown[x][y] = false;
		}
	}
}

void Erase(KAL *k) {
	for (int x = 0; x <= QUATER; x++) {
		for (int y = 0; y <= QUATER; y++) {
			k->leftUp[x][y] = false;
			k->leftDown[x][y] = false;
			k->rightUp[x][y] = false;
			k->rightDown[x][y] = false;
		}
	}
}

int main() {

	int rand_value = (int)time(NULL);
	srand(rand_value);

	struct KAL kaleidoscope;
	init(&kaleidoscope);

	for (int i = 0; i<1000; i++) {
		system("cls");
		Erase(&kaleidoscope);
		NewPattern(&kaleidoscope);
		Print(&kaleidoscope);
		wait(1000);
	}

	return 0;
}
