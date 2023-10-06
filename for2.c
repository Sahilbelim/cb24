#include<stdio.h>
void main()
{
    int number,i;

    printf("Enter Value of number : ");
    scanf("%d", &number);

    for (i = 1; i <= number;i++)
    {
        printf("%d ,", i);
    }
}