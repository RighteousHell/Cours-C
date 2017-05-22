#include "Header.h" 

ULL fib(int n) {
	int *Arr = (int*)calloc(n + 1, sizeof(int));
	int r = fib2(n, Arr);
	free(Arr);
	return r;
}
