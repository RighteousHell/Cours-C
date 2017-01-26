#include <stdio.h>
#include <string.h>
#include <stdbool.h>

 struct TABLECELL {
	char ch;
	int frequency;
<<<<<<< HEAD
};
=======
		  };
>>>>>>> origin/master

void bubblesort(struct TABLECELL tc[], int size) {
	for (int i = 0; i < size - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < size - i - 1; j++) {
			if (tc[j].frequency<tc[j + 1].frequency) {
				struct TABLECELL a;
				a.ch = tc[j].ch;
				a.frequency = tc[j].frequency;
				tc[j].ch = tc[j + 1].ch;
				tc[j].frequency = tc[j + 1].frequency;
				tc[j + 1].ch = a.ch;
				tc[j + 1].frequency = a.frequency;
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}

int main() {

	printf("Enter string:\n");

	char string[120];

	gets(string);

	struct TABLECELL firstcell[120];
	struct TABLECELL* start = firstcell;
	int tablesize = 0;

	int size = strlen(string);

	for (int i = 0; i<size; i++) {
		struct TABLECELL* pnow = start;
		bool newch = true;
		for (int j = 0; j<tablesize; j++) {
			char comp = pnow->ch;
			if (string[i] == comp) {
				pnow->frequency++;
				newch = false;
			}
			pnow++;
		}
		if (newch == true) {
			pnow = start;
			for (int y = 0; y<tablesize; y++, pnow++);
			pnow->ch = string[i];
			pnow->frequency = 1;
			tablesize++;
		}
	}

	bubblesort(firstcell, tablesize);

	for (int k = 0; k<tablesize; k++) {
		printf("%c : %d\n", start->ch, start->frequency);
		start++;
	}

	int end;
	scanf("%d", &end);

<<<<<<< HEAD
}
=======
}
>>>>>>> origin/master
