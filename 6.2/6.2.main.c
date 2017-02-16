#include "6.2.header.h"

int main() 
{
	printf("\t\tFind the longest sequence from 2 to 1 000 000\n");
		LLI calcul = 0;
		int maxstep = 0;
		LLI maxnum = 0;
		for (int i = MIN; i <= MAX; i++) {
			int res = Sequence((LLI)i, 0, false);
			if (res>maxstep) {
				maxstep = res;
				maxnum = i;
		}
			if (maxnum != calcul)
			{
				calcul = maxnum;
				printf("The longest sequence of %d steps for the number %d\n", maxstep, calcul);
			}
			
	}
		printf("\n\n\n\n\t\t Maximum steps: %d Number of creating a sequence: %d", maxstep, calcul);
	getch();
	return 0;
}
