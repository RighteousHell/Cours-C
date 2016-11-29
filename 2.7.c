#include <stdio.h>
#define SIZE 120
int main()
{
	char str[SIZE];
	int word_cout = 0;
	printf("Enter your the string:\n");
	gets(str);
	for (int i = 1; str[i] != '\0'; i++)
		if (str[i] == ' ')
			word_cout++;
	printf("You entered %d words", word_cout + 1);
	getch();
	return 0;
}