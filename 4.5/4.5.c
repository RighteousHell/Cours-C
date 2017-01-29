#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE_STR 80
#define MAX_STR 100


void sortir(char **p, int size);

int main() {

    char str[MAX_STR][SIZE_STR] = {'\0' };
    int s_count = 0;

    char *pointers[MAX_STR];
    int psize = 0;
    FILE* A_Brook_In_The_City = fopen("A_Brook_In_The_City.txt", "r");
    printf("\t\t Robert Frost - A Brook In The City:\n\n");
    while (fgets(str[s_count], SIZE_STR, A_Brook_In_The_City)!=NULL){
        printf("%s", str[s_count]);
         s_count++;
        pointers[psize] = &str[s_count][0];
        psize++;
    } 
    fclose(A_Brook_In_The_City);



   sortir(pointers, psize);
   FILE* increase = fopen("increase.txt", "w");
   char NL = '\n';
   for (int i = 0; i < psize - 1; i++)
   {
       fprintf(increase, "%s%c",pointers[i], NL);
   }
   fclose(increase);
     printf("\n\n\tStrings in new sequence (increase):\n\n");
     FILE* result = fopen("increase.txt", "r");
    for (int i = 0; i < psize; i++)
        printf("%s\n", pointers[i]);
    getch();



}
void sortir(char **p, int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swap = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (strlen(p[j])>strlen(p[j + 1])) {
                char *a;
                a = p[j];
                p[j] = p[j + 1];
                p[j + 1] = a;
                swap = true;
            }
        }
        if (!swap)
            break;
    }
}
