#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
#define A 48
#define B 65
#define C 97
#define LENGHT 1 //The value in line with that no debris has been obtained experimentally.
int main()
{
	char string[LENGHT];
	int rand1=0, rand2=0, rand3=0,rand_s=0, cout_A=0, cout_a=0, cout_0=0;
	
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++)
	{
				for (int j = 0; j <SIZE; j++)
		{
			rand_s = 1+rand() % 3;
			switch (rand_s)
			{
			case 1:
			{rand1 = A + rand() % 10;
			string[j] = (char)rand1;
			cout_0++;
			}
			break;
			case 2:
			{rand2 = B + rand() % 26;
			string[j] = (char)rand2;
			cout_A++;
			}
			break;
			default:
			case 3:
			{rand3 = C + rand() % 26;
			string[j] = (char)rand3;
			cout_a++;
			}
			break;
			}
		}
				if (cout_a != 0 && cout_A != 0 && cout_0 != 0)
				{
					printf("Password %.02d: %s\n", i + 1, string);
				}
				else
				{
					i--;
				}
					cout_a = 0;
					cout_A = 0;
					cout_0 = 0;
				
	}
	

	getch();
	return 0;
}
