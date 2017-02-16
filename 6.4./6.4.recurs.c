#include "6.4.header.h"

int Recurs(int *a, int size, int summ, int deep) 
{
	if (deep<size) 
	{
		summ += a[deep];
		printf("Step %d: %d\n", deep + 1, summ);
		Recurs(a, size, summ, deep + 1);
	}
	else
		return summ;
}
