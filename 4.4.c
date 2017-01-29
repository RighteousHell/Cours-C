#include <stdio.h>
int main()
{
    char str[50];
    char* posl;
    char* next;
    printf("Enter the string\n");
    gets(str);
    int a = 1, b = 0, c = 0;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        posl = &str[i];
        next = &str[i + 1];
        if (*posl == *next)
            a = a + 1;
        else if ((a != 1) && (b < a))
        {
            b = a;
            c = i;
            a = 1;
        }
    }
    printf("Length: %d\n", b);
    printf("The longest string: ");
    int n = c - b + 1;
    posl = &str[n];
    for (n; n <= c; n++)
        printf("%c", *posl);
    getch();
    return 0;
}
