#include "Header.h"

int main() {
	int n = 0;
	printf("Choose, please:\n1-you N value\n2-on screen\n3-on file\n");
	int selector = 0;
	scanf("%d", &selector);
	if (selector == 1)
	{
		while (true) {
			printf("Enter N:");
			scanf("%d", &n);
			if (n >= MIN && n <= MAX)
				break;
		}
		int start = clock();
		int res = fib(n);
		int dur = clock() - start;
		printf("%d duration: %d ms", res, dur);
	}else if (selector == 2)
	{
		for (int i = MIN; i <= MAX; i++) {
			int start = clock();
			int res = fib(i);
			int dur = clock() - start;
			printf("For N=%d: Result=%d speed=%d ms\n", i, res, dur);
		}
	}else if (selector == 3) 
	{
		FILE *file = fopen("res_time.cvs", "w");
		for (int i = MIN; i <= MAX; i++) {
			int start = clock();
			int res = fib(i);
			int dur = clock() - start;
			fprintf(file, "%d %d\n", res, dur);
		}
		fclose(file);
	}
	getch();
	return 0;
}