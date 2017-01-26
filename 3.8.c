#include <stdio.h> 
#define SIZE 80 
int main()
{
	char str[SIZE] = { 0 };
	int n = 0, i = 0, cw = 0;
	int word = 0;
	printf("Please, enter you string: ");
	gets(str);
	printf("Please, enter number word: ");
	scanf("%d", &n);
	for (i = 0; i < strlen(str); i++)
	{
		if ((str[i] != ' ') && (word == 0))
		{
			word = 1;
			cw++;
		}
		else if (str[i] == ' ')
		{
			word = 0;
		}
		if (cw == n)
		{
			for (int j = i; (str[j] != ' ') && (str[j] != '\0'); j++)
			{
				putchar(str[j]);
			}
			break;
		}
	}
	getch();
	return 0;
}