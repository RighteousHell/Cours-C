
#include <stdio.h>
#define map_size 256
int main()
{
	int map[map_size] = { 0 };
	char str[120];
	printf("Enter the string:\n");
	gets(str);
	for (int i = 0; i < strlen(str); i++)
		map[str[i]]++;
	printf("Occurrence of characters in the string:\n");
	for (int i = 1; i < map_size; i++)
	{
		if (map[i])
			printf("'%c' -> %d\n", (char)i, map[i]);
	}
	getch();
	return 0;
}