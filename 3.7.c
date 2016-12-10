#include <stdio.h>
#include <stdlib.h>
#define S_SIZE 30
int main()
{
	char string[S_SIZE];
	srand(time(NULL));
	const int A = 48, B = 65, C = 97;
	int r1 = 0, r2 = 0, r3 = 0, arr_int[S_SIZE],cout_abc=0,max=0,max_old=0;
	for (int i = 0; i < S_SIZE; i++)
	{
		arr_int[i] = 0;
	}
	for (int i = 0; i<strlen(string); i++)
	{
		int rand_c = rand() % 3;
		switch (rand_c)
		{
		case 0:
		{
				  r1 = A + rand() % 10;
				  string[i] = (char)r1;
		}
			break;
		case 1:
		{
				  r2 = B + rand() % 26;
				  string[i] = (char)r2;
		}
			break;
		case 2:
		{
				  r3 = C + rand() % 26;
				  string[i] = (char)r3;
		}
			break;
		}
	}
	printf("Your string: %s\n", string);
	for (int i = 0; i < S_SIZE; i++)
	{
		if (string[i])
		{
			cout_abc++;	
		}
		arr_int[i] = cout_abc;
		cout_abc = 0;
	}
	max = arr_int[0];
		
	for (int i = 0; i < S_SIZE; i++)
	{

		if (arr_int[i] > max)
		{
			max = arr_int[i];
		}
		max_old = max;
		if (max<max_old)
		{
			putchar(max);	
		}
		
	}
	getch();
	return 0;
}
