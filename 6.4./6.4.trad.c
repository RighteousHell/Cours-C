#include "6.4.header.h"
int Traditional(int *a, int size) 
{
	LLI summ = 0;
	for (int i = 0; i<size; i++) 
	{
		summ += a[i];
		printf("Step %d: %d\n", i + 1, summ);
	}
	return summ;
}
