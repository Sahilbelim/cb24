#include<stdio.h>
void main()
{
    int number1, number2;
    printf("Enter number 1 ");
    scanf("%d", &number1);
    printf("Enter Number 2 ");
    scanf("%d", &number2);

    printf("Value of number 1 : %d \n", number1);
    printf("Value of number 2 : %d \n", number2);

    if (number1<number2)
    {
        printf("Number 1 is smaller then number 2 \n");
    }
    else if(number2<number1)
    {
        printf("Number 2 is smaller then number 1 \n");

    }
    else if(number1==number2)
    {
        printf("Both are same \n");
    }
    else
    {
        printf("Invalide input \n");
    }
    printf("Good bye ");
}
