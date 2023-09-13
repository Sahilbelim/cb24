#include<stdio.h>
void main()
{
    int number1, number2;
    number1 = 50;
    number2 = 70;

    printf("Befor number 1 %d\n", number1);
    printf("Befor number 2 %d\n", number2);

    number1 = number1 + number2; // number 1 = 120
    number2 = number1 - number2; // number 2 = 50
    number1 = number1 - number2; // number 1 = 70

    printf("After number 1 %d \n", number1);
    printf("After number 2 %d \n", number2);
    
}