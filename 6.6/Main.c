#include "Header.h" 

int main() {
	int n = 0;
	while (true) {
		printf("Enter you number:");
		scanf("%d", &n);
		ULL res = fib(n);
		printf("%d\n", res);
	}
	
	getch();
}