
#include "6.7.h"
int main(void)
{
	int selector;
	int count = 0;
	char player = 'X';
	char lab[SIZE2][SIZE1] = { NULL };
	Inpuht(lab, &player);
	Print(lab);
	srand(time(NULL));
	do
	{
		selector = rand()%4+1;
		system("cls");
		count++;
		Move(lab,&player, &selector);
		Print(lab);
		printf("\nSteps:%d",count);	
	} while (lab[7][0]!=player);
	system("cls");
	Print(lab);
	printf("\nResult:%d",count);
	getch();
	return 0;
}




