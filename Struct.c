// question is program to store details of 5 students ,
//  and print any students details asking by the user
#include <stdio.h>
#include <string.h>
struct Details
{
    char name[50];
    char roll[15];
    float cgpa;
};

int main()
{
    struct Details a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %49[^\n]", a[i].name);
        printf("\nEnter roll of student %d: ", i + 1);
        scanf("%s", a[i].roll);
        printf("\nEnter cgpa of student %d: ", i + 1);
        scanf("%f", &a[i].cgpa);
    }
    int k;
    printf("\nENter 1 if u want to find data by name or enter 0 for checking by roll:");
    scanf("%d", &k);
    char sn[50];
    if (k)
    {
        printf("\nEnter name : ");
        scanf(" %49[^\n]", sn);
        for (int i = 0; i < 5; i++)
        {
            if(strcmp(sn,a[i].name) == 0)
            {
                printf("\nName: %s",a[i].name); 
                printf("\nRoll: %s",a[i].roll);
                printf("\ncgpa: %.2f",a[i].cgpa);
            }
        }
    }
    else
    {
        printf("\nEnter roll : ");
        scanf("%s", sn);
        for (int i = 0; i < 5; i++)
        {
            if(strcmp(sn,a[i].roll) == 0)
            {
                printf("\nName: %s",a[i].name); 
                printf("\nRoll: %s",a[i].roll);
                printf("\ncgpa: %.2f",a[i].cgpa);
            }
        }
    }
    return 0;
}