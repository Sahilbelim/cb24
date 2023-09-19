// write a program to check number odd or even .
#include<stdio.h>
void main()
{
    int number;

    printf("Enter Value of number  : ");
    scanf("%d", &number);

    // printf("Value of number %d ", number);
    
    if(number%2==0)
    {
        printf("\nNumber is Even \n");
    }
    else
    {

        printf("\nNumber is Odd  \n");
    }
    printf("\nGood bye ");
}