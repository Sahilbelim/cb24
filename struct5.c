#include <stdio.h>

struct student
{
    char name[24];
    int age;
    float weight;
    char number[10];
    char email[64];
};



void main()
{
    int size, i;
    printf("Enter Number of Student : ");
    scanf("%d", &size);

    struct student s[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of Student %d :\n", i + 1);

        printf("Enter Name : ");
        scanf("%s", &s[i].name);
        printf("Enter Age : ");
        scanf("%d", &s[i].age);
        printf("Enter Weight : ");
        scanf("%f", &s[i].weight);
        printf("Enter Number : ");
        scanf("%s", &s[i].number);
        printf("Enter Email  : ");
        scanf("%s", &s[i].email);
    }

    for (i = 0; i < size;i++)
    {
        printf("\n|||||||||||||||||||||||student %d ||||||||||||||||||||||||\n",i+1);
        printf("\tNo.:%d\n", i + 1);
        printf("\tName    :%s\n", s[i].name);
        printf("\tAge     :%d\n", s[i].age);
        printf("\tWeight  :%.2f\n", s[i].weight);
        printf("\tNumber  :%s\n", s[i].number);
        printf("\tEmail   :%s\n", s[i].email);
    }
}