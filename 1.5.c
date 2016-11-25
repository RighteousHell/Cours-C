/*
Write a program that accepts a string from the user and
displays it on the screen, aligning the center
*/
#include <stdio.h>
#include <string.h>
int main(void) 
{	
	int size=0, lenght = 80;// lenght - default consol size
	char str[81];
	printf("Please,enter the string: ");
	scanf("%s", &str);
	size= strlen(str);
	system("cls");
	lenght = (lenght-size)/2;// Calculation of the required number of spaces to a string.
	for (int i = 0; i <= lenght; i++)
	{
		printf(" ");
	}
	printf("%s", str);

	getch();


	return 0;
}