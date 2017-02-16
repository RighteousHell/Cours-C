#include "6.3.header.h"

int main() {
	printf("Enter number: ");

	int n = 0;
	scanf("%d", &n);

	STRING string;
	string.str = (char*)malloc(sizeof(char*));
	string.end = string.str;
	string.size = 0;

	convertToString(&string, n, 10);
	printf("String: %s\n", string.str);

	getch();
}
