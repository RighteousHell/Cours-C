#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//to call a function library "isalpha".
#define COUT 2
#define SIZE 80
int main()
{
	char string[SIZE];
	int word[COUT] = {0,0};//An array stores the item number which begins with the word and the word length.
	int word_inc = 0;
	scanf("%[^\n]s",&string);

	for (int i = strlen(string); i >= 0; i--)
	{
		if (isalpha(string[i]))//isalpha- The function returns 0 if the character is a letter and 0 otherwise.
		{
			word_inc++;


			if (string[i - 1] == ' ' || string[i - 1] == 0)
			{
				if (word[1] < word_inc)
				{
					word[0] = i;
					word[1] = word_inc;
				}
				word_inc = 0;
			}
		}

	}
	for (int i = word[0]; i != word[0] + word[1]; i++)
	{
		putchar(string[i]);
		
	}
	
	
	printf("\nIts length is %d characters.\n", word[1]);
	getch();
	return 0;
}