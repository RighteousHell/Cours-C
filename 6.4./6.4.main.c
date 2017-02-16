#include "6.4.header.h"


int main() 
{

	int rval = (int)time(NULL);
	srand(rval);
	printf("Please, enter extent for 2 and seting langht of array: ");
	int power = 0;
	scanf("%d", &power);

	int size = (int)pow(2.0, power);
	int *arr = (int*)malloc(size * sizeof(int));

	printf("The array size %d generated:\n", size);

	for (int i = 0; i<size; i++)
	{
		int r = rand() % 10;
		arr[i] = r;
	}

	printf("\n\n");
	 double bg_t = clock();
	int result = Traditional(arr, size);
	 double end_t = clock();
	end_t = end_t-bg_t;
	printf("\tAdded Traditional: summ=%d, Time:%F\n", result,end_t);
	 double bg_r = clock();
	result = Recurs(arr, size, 0, 0);
	 double end_r = clock();
	end_r = end_r - bg_r;
	printf("\tAdded Recursively: summ=%d, Time:%F", result,end_r);
	
	free(arr);
	getch();
}

