#pragma once
#define SIZE1 30
#define SIZE2 9
#include <stdio.h>
#include <stdlib.h>

void Print(char lab[][SIZE1]);
void Inpuht(char lab[][SIZE1], char *player);
void Move(char lab[][SIZE1], char *player, int *selector);