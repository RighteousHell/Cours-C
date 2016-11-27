#include <stdio.h>
#define STR_SIZE 150
int main()
{
	char string[STR_SIZE];
	int i = 0;
	printf("Please, enter the string:\n");
	gets(string);
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
			printf("%c", string[i]);
		if (string[i] != ' ' && string[i + 1] == ' ')
			printf("%c", string[i + 1]);
	}
	getch();
	return 0;
}