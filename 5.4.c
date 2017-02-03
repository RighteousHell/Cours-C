#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <stdbool.h>

struct STRING {
	char str[80];
	char *pointers[10];
	int wordcount;
};
typedef struct STRING STRING;
void getWords(STRING *s) {
	for (int i = 0; i<strlen(s->str) - 1; i++) {
		s->pointers[s->wordcount] = &s->str[i];
		s->wordcount++;
		for (int j = i;; j++) {
			if (s->str[j] == ' ') {
				i = j;
				break;
			}
			if (s->str[j] == '\0')
				return;
		}
	}
}

void printWord(STRING *s, int n) {
	char *now = s->pointers[n];
	while (true) {
		if (*now != ' ' && *now != '\0') {
			printf("%c", *now);
			now++;
		}
		else {
			printf("%c", ' ');
			break;
		}
	}
}

void MixingPrint(STRING *s) {

	int *nomixednumbers = (int*)malloc(s->wordcount * sizeof(int));
	int *mixednumbers = (int*)malloc(s->wordcount * sizeof(int));

	for (int i = 0; i<s->wordcount; i++) {
		nomixednumbers[i] = i;
	}

	for (int i = 0; i<s->wordcount; i++) {
		int **unmixed = (int**)malloc((s->wordcount - i) * sizeof(int*));
		for (int j = 0, n = 0; j<s->wordcount; j++, n++) {
			if (nomixednumbers[j] != -1) {
				unmixed[n] = &nomixednumbers[j];
			}
			else
				n--;
		}
		int r = rand() % (s->wordcount - i);
		mixednumbers[i] = *unmixed[r];
		*unmixed[r] = -1;
		free(unmixed);
	}

	for (int i = 0; i<s->wordcount; i++) {
		printWord(s, mixednumbers[i]);
	}

	free(nomixednumbers);
	free(mixednumbers);
}

int main() {

	STRING string;
	string.wordcount = 0;

	int startval = time(NULL);
	srand(startval);

	FILE *file;
	file = fopen("text.txt", "r");

	if (file == NULL)
	{
		printf("Dont open");
	}
	else {
		while (!feof(file))
		{
			if (fgets(string.str, 80, file)) {
				string.wordcount = 0;
				getWords(&string);
				MixingPrint(&string);
			}
			printf("\n*\n");
		}
	}
	getch();
	return 0;
}
