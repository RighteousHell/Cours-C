#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define TIME_D 1000
#define SIZE 39
#define MIN 6
#define MAX 21

struct FRACTAL {
	bool pole[SIZE][SIZE];
};

typedef struct FRACTAL fract;

void wait(int ms);

void Erase(fract *f);

void DrawSnowflake(int x, int y, int start_distance, fract *f, int deep);

void Print(fract *f);
