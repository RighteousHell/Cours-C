#include <stdio.h>
#include <stdlib.h>
#define S_SIZE 30
int main(void)
{
	
	char string[S_SIZE];
	srand(time(NULL));
	/*char abc, number;
	char* ABC;
	char* Number;
	int j = 0,i=0;*/
	for (int i = 0; i < strlen(string); i++)
	{
		int n = 0;
		n = rand() % 62;
		switch (n)
		{
		case 0: string[i] = 'a';
			break;
		case 1:string[i] = 'b';
			break;
		case 2:string[i] = 'c';
			break;
		case 3:string[i] = 'd';
			break;
		case 4:string[i] = 'e';
			break;
		case 5:string[i] = 'f';
			break;
		case 6:string[i] = 'g';
			break;
		case 7:string[i] = 'h';
			break;
		case 8:string[i] = 'i';
			break;
		case 9:string[i] = 'j';
			break;
		case 10:string[i] = 'k';
			break;
		case 11:string[i] = 'l';
			break;
		case 12:string[i] = 'm';
			break;
		case 13:string[i] = 'n';
			break;
		case 14:string[i] = 'o';
			break;
		case 15:string[i] = 'p';
			break;
		case 16:string[i] = 'q';
			break;
		case 17:string[i] = 'r';
			break;
		case 18:string[i] = 's';
			break;
		case 19:string[i] = 't';
			break;
		case 20:string[i] = 'u';
			break;
		case 21:string[i] = 'v';
			break;
		case 22:string[i] = 'w';
			break;
		case 23:string[i] = 'x';
			break;
		case 24:string[i] = 'y';
			break;
		case 25:string[i] = 'z';
			break;
		case 26:string[i] = 'A';
			break;
		case 27:string[i] = 'B';
			break;
		case 28:string[i] = 'C';
			break;
		case 29:string[i] = 'D';
			break;
		case 30:string[i] = 'E';
			break;
		case 31:string[i] = 'F';
			break;
		case 32:string[i] = 'G';
			break;
		case 33:string[i] = 'H';
			break;
		case 34:string[i] = 'I';
			break;
		case 35:string[i] = 'J';
			break;
		case 36:string[i] = 'K';
			break;
		case 37:string[i] = 'L';
			break;
		case 38:string[i] = 'M';
			break;
		case 39:string[i] = 'N';
			break;
		case 40:string[i] = 'O';
			break;
		case 41:string[i] = 'P';
			break;
		case 42:string[i] = 'Q';
			break;
		case 43:string[i] = 'R';
			break;
		case 44:string[i] = 'S';
			break;
		case 45:string[i] = 'T';
			break;
		case 46:string[i] = 'U';
			break;
		case 47:string[i] = 'V';
			break;
		case 48:string[i] = 'W';
			break;
		case 49:string[i] = 'X';
			break;
		case 50:string[i] = 'Y';
			break;
		case 51:string[i] = 'Z';
			break;
		case 52:string[i] = '1';
			break;
		case 53:string[i] = '2';
			break;
		case 54:string[i] = '3';
			break;
		case 55:string[i] = '4';
			break;
		case 56:string[i] = '5';
			break;
		case 57:string[i] = '6';
			break;
		case 58:string[i] = '7';
			break;
		case 59:string[i] = '8';
			break;
		case 60:string[i] = '9';
			break;
		case 61:string[i] = '0';
			break;
		}
	}
	printf("String before: %s\nString after:  ", string);
	for (int i = 0; i < strlen(string); i++)
	{
		if ((string[i] >= (char)65 && string[i] <= (char)90) || (string[i] >= (char)97 && string[i] <= (char)122))
			printf("%c", string[i]);
	}
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] >= (char)48 && string[i] <= (char)57)
			printf("%c", string[i]);
	}
	
	
	/*do
	{
		for (i = strlen(string) - 1; i >= 0; i--)
		{
			j = i;
			if (string[i] >= 'A')
				abc = (char)string[i];
			else number = (char)string[j];
			string[i] = number;
			string[j] = abc;
		}
	} while (string[i] > string[i++]);
	/*




		/*int j = 0;
		if ((string[i] >= 'a')&&(string <= 'z') || (string[i] >= 'A') && (string[i] <= 'Z'))
		{
			ABC = &string[i];
			abc = string[i];
			for(j=i;j>=0;j--)
			if ((string[j]) > '0' && (string[j] < '9'))
			{
				Number = &string[j];
				number = string[j];
				
			}
			
		}
		*Number = abc;
		*ABC = number;
		*/
	getch();
	return 0;
}
