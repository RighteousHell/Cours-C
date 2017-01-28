#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80


int main()
{
    char str[SIZE] = { '\0' };
    char searth [SIZE] = " ";
    char* p_word;
    char* arr_p[SIZE];
    int n = 0;
    printf("Please, enter you string: ");
    gets(str);

    p_word = strtok(str, searth);// STRTOK - is function which divides string into substrings


    for (int i=0; p_word !='\0';i++)
    {
        arr_p[i] = p_word;
        p_word = strtok(NULL,searth);
        n = i;
    }
    printf("You string conversel:");
    for (int i = n; !(i<0); i--)
    {

        printf(" %s", arr_p[i]);
        printf(" ");
    }
     getch();
     
     
     
     return 0;
}
