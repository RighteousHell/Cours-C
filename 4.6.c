#include <stdio.h>
#define MAX 30

int main()
{
    char name[MAX][MAX];
    int age[MAX];
    int *old_age, *young_age;
    char *old_name, *young_name;
    int i = 0, n;
    printf("Enter the number of family members: ");
    scanf("%d", &n);
    printf("Enter are name and age: \n");
    while (i<n)
    {
        scanf("%s%d", &name[i][0], &age[i]);
        ++i;
    }
    young_age = &age[0];
    old_age = &age[0];
    young_name = &name[0][0];
    old_name = &name[0][0];
    for (i = 1; i<n; i++)
    {
        if (age[i]<*young_age)
        {
            young_age = &age[i];
            young_name = &name[i][0];
        }
        else if (age[i]>*old_age)
        {
            old_age = &age[i];
            old_name = &name[i][0];
        }
    }
    printf("\n");
    printf("The youngest: %s, %d\n", young_name, *young_age);
    printf("The oldest: %s, %d", old_name, *old_age);
    getch();
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
#define SIZE_NAME 30

int main()
{
    char* name_young, *name_old;
    int* age_young, *age_old ;
    int n;

    printf("How many people are in your family? ");
    scanf("%d", &n);


    char** name = (char**)calloc(n, sizeof(char*));
    for (int i = 0; i < n; i++)
    {
        name[i] = (char*)calloc(SIZE_NAME, sizeof(char));
    }
    
    int* age = (int*)calloc(n, sizeof(int));

    for (int i=0;i<n;i++)
    {
        printf("%d  Name:", i+1);
        scanf("%s",&name[i][0]);
        printf("   Age:");
        scanf("%d",&age[i]);
        printf("\n");
    }
  
    
    
    getch();
    return 0;
}*/
