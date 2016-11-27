#include <stdio.h>
#define STR_SIZE 150
int main()
{
	char string[STR_SIZE];
	int i = 0, cout1 = 0, cout2 = 0;
	printf("Enter the string:\n");
	gets(string);
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] != ' ')
		{
			printf("%c", string[i]);
			cout1++;
		}
		if (string[i] != ' ' && string[i + 1] == ' ')
		{
			printf(" (%d)\n", cout1);
			cout1 = 0;
			cout2++;
		}
		if (string[i] != ' ' && string[i + 1] == '\0')
		{
			printf(" (%d)\n", cout1);
			cout2++;
		}
	}
	printf("You enter %d words", cout2);
	getch();
	return 0;
}