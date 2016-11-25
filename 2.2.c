/*
Write a program to "guess the number".
It conceives program number in the range from 1 to 100,
and the user must guess his smallest number of retries.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	 enum EVENT //The structure for the implementation of the operator "switch".
	{
		More,
		Less,
		Victory	
	}event;

	 int number=0,try=1,cout=0 ;
	srand(time(NULL)); /*Function enables to generate random numbers within a predetermined
					   range depending on the system time */
	number = rand() % 100 + 1;//Determination of the range of pseudorandom numbers.
	printf("The program put forth a number from 1 to 100. Guess what!");
	getch();
	system("cls");
	do
	{
		printf("Your attempt: ");
		scanf("%d", &try);
		if (try > number)
			event = More;
		else if (try < number)
			event = Less;
		else event = Victory;
			
			switch (event)
			{
			case More: 		
				printf("Many. Try less");
				break;
			case Less: if (try<number)
							{
							printf("Few.Try more");
							}
							break;
			case Victory: if (try==number)
								{
								printf("Victory!");
								}
								break;			
			}
		getch();
		system("cls");
		cout++; //The counter attempts
	} while (number!=try);
	
	printf("You win! Attempts required: %d", cout);
	getch();
	return 0;
}