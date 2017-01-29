#include <stdio.h>
#include <string.h>
#define SIZE 80

int main()
{
    char str[SIZE] = { '\0' };
    char* p_word;
    char* q_word;
    printf("Please, enter you string: ");
    gets(str);
    int n = strlen(str) - 1;
    p_word = &str[0];
    q_word = &str[n];
    for (int i = 1; p_word != &str[n]; i++)
    {
        if (*p_word == *q_word)
        {
            p_word = &str[i];
            q_word = &str[n - i];
        }
        else
        {
            printf("This string is not a palindrome");
            break;
        }
    }
    if (*p_word == *q_word)
        printf("This string is a palindrome");
    getch();
    return 0;
}
