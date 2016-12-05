#include <stdio.h>
#include <stdlib.h>
#define S_SIZE 30
int main(void)
{
	
	char string[S_SIZE];
	srand(time(NULL));
	const int A = 48, B = 65, C = 97;
	int r1 = 0, r2 = 0, r3 = 0;
	/*char abc, number;
	char* ABC;
	char* Number;
	int j = 0,i=0;*/
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
	printf("String before: %s\nString after:  ", string);
	for (int i = 0; i < strlen(string); i++)
	{
		if ((string[i] >= (char)B && string[i] <= (char)90) || (string[i] >= (char)C && string[i] <= (char)122))
			printf("%c", string[i]);
	}
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] >= (char)A && string[i] <= (char)57)
			printf("%c", string[i]);
	}
	
	
	/*do
	{
		for (i = strlen(string) - 1; i >= 0; i--)
		{
			j = i;
			if (string[i] >= 'A')
				abc = (char)string[i];
			else number = (char)string[j];
			string[i] = number;
			string[j] = abc;
		}
	} while (string[i] > string[i++]);
	/*




		/*int j = 0;
		if ((string[i] >= 'a')&&(string <= 'z') || (string[i] >= 'A') && (string[i] <= 'Z'))
		{
			ABC = &string[i];
			abc = string[i];
			for(j=i;j>=0;j--)
			if ((string[j]) > '0' && (string[j] < '9'))
			{
				Number = &string[j];
				number = string[j];
				
			}
			
		}
		*Number = abc;
		*ABC = number;
		*/
	getch();
	return 0;
}
