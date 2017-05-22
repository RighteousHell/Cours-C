#include "Header.h" 

ULL fib2(int n, int *R) {
	if (n == 0) {
		R[n] = 0;
		return 0;
	}
	if (n == 1) {
		R[n] = 1;
		return 1;
	}

	if (R[n - 1] != 0)
		return R[n];

	R[n] = fib2(n - 1, R) + fib2(n - 2, R);
	return R[n];
}