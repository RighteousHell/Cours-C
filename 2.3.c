/*
Write a program that displays on the screen a triangle of stars.
Quantity rows lines from the keypad by the user.
*/
#include <stdio.h>
int main(void)
{
	int strcout, momentlenght = 1;

	printf("Enter the the number of lines: ");
	scanf("%d", &strcout);

	
	while (strcout>0)
	{
		for (int i = 1; i < strcout; i++)
		{
			printf(" ");
		}
			for (int i = 0; i < momentlenght; i++)
			{
				printf("*");
			}
			printf("\n");
		
				
		strcout--;
		momentlenght=momentlenght+2;
	}
	getch();
	return 0;
}