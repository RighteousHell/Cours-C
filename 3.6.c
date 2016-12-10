#include <stdio.h>
#define SIZE 20
int main()
{
	int int_arr[SIZE], k = 0, min_max[2] = { 0, 0 }, num_i[2] = { 0, 0 }, sum = 0, x = 0;
	srand(time(NULL));
	for (int i = 0; i <SIZE; i++)
	{
		int_arr[i] = -99 + rand() % 199;
		printf("%d ", int_arr[i]);
	}
	min_max[0] = int_arr[0];
	min_max[1] = int_arr[0];
	for (int i = 0; i <SIZE; i++)
	{
		if (int_arr[i] < min_max[0])
		{
			min_max[0] = int_arr[i];
			num_i[0] = i;
		}
	}


	for (int i = 0; i<SIZE; i++)
	{
		if (int_arr[i]> min_max[1])
		{
			min_max[1] = int_arr[i];
			num_i[1] = i;
		}
	}
	printf("\nThe min number: %d", min_max[0]);
	printf("\nThe max number: %d", min_max[1]);
	x = num_i[0] + 1;
	for (int i = 1; i <(num_i[1] - num_i[0]); i++)
	{
		sum = sum + int_arr[x];
		x++;
	}
	printf("\nThe sum diapason: %d", sum);
	getch();
	return 0;
}
