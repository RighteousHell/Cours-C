#include <stdio.h>
#include <stdbool.h>
#define STR_SIZE 150
int main()
{
	char string[STR_SIZE];
	int cout_word=0,rels, word_e=0, word_b=0;
	

	printf("Enter your string: ");
	scanf("%[^\n]s",&string);
	
	for (int i = 0; string[i] != '\0'; i++)
	{
		if ((string[i] == ' ')&&(string[i+1*sizeof(char)]!=' '))
			cout_word++;
	}
	printf("%d", ++cout_word);
	getch();
	return 0; 

}