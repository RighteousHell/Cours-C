#include "6.2.header.h"

int Sequence(LLI n, int step, bool print)
{
	if (print == true)
		printf("%lli    step=%d\n", n, step);
	if (step == 0) {
		if (n<MIN || n>MAX)
			return 0;
	}
	if (n == 1) {
		return step;
	}
	if (n % 2 == 0) {
		Sequence(n / 2, step + 1, print);

	}
	else {
		Sequence(3 * n + 1, step + 1, print);

	}
}
