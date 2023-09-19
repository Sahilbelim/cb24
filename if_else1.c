#include<stdio.h>
void main()
{
    int number1, number2;

    printf("Enter Value of number 1 ");
    scanf("%d", &number1);
    printf("Enter Value of number 2 ");
    scanf("%d", &number2);

    // printf("\nValue of number 1 %d \n\n", number1);
    // printf("Value of number 2 %d \n\n", number2);

    if(number1>number2)
    {
        printf("Number 1 greater then number 2 \n\n");
    }
    else
    {
        printf("number 2 greater then number 1 \n\n");
    }
    printf("Good bye ");
}