#include <stdio.h>
#define STR_S 80
int main()
{
	char str[STR_S];
	int d = 0, a = 0, i = 0, n = 2;
	printf("Enter the string:\n");
	gets(str);
	a = strlen(str) / 3;
	for (int c = 0; c < a; c++)
	{
		d = d + ((int)str[i] - 48)*pow(10, n) + ((int)str[i + 1] - 48)*pow(10, n - 1) + ((int)str[i + 2] - 48)*pow(10, n - 2);
		i = i + 3;
	}
	n = strlen(str) - 3 * a;
	do
	{
		d = d + ((int)str[i] - 48)*pow(10, n - 1);
		n--;
		i++;
	} while (n != 0);
	printf("The sum of four-digit numbers: %d", d);
	getch();
	return 0;
}