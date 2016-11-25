#include <stdio.h>
int main(void)
{
		struct Time
	{
		int hours, minuts, secunds;
	}time;
	do
	{
		printf("Enter the current time in the format HH:MM:SS:\n");
		printf("Hours:");
		scanf("%d", &time.hours);
		printf("\nMinuts:");
		scanf("%d", &time.minuts);
		printf("\nSecods:");
		scanf("%d", &time.secunds);
		system("cls");
	} while (!((time.hours<=24 && time.hours>=00)&&(time.minuts>=00&&time.minuts<=60)&&(time.secunds>=00&&time.secunds<=60)));
	printf("\nPresent time: %d:%d:%d\n", time.hours,time.minuts ,time.secunds);
	if (time.hours > 00 && time.hours < 04)
	{
		printf("Good night!");
	}
	else if (time.hours > 04 && time.hours < 12)
		{
		printf("Good morning!");
		}
		else if (time.hours > 12 && time.hours < 18)
			{
			printf("Good day!");
			} else if (time.hours > 18 && (time.hours <= 23 && time.minuts <=59 && time.secunds <=59))
					{
				printf("Good evening!"); 
			}
			else printf("You are not on Earth!");
	getch();


	return 0;
}