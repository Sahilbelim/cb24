#include<stdio.h>
void main()
{
    // int number1, number2, number3, number4, number5;
    int number[5],i;
    number[0] = 10;
    number[1] = 20;
    number[2] = 40;
    number[3] = 30;
    number[4] = 60;

    i = 0;
    printf("Value of number 1  %d\n", number[i]);
    i = +1;
    printf("Value of number 2  %d\n", number[i]);
    i = 2;
    printf("Value of number 3  %d\n", number[i]);
    i = 3;
    printf("Value of number 4  %d\n", number[i]);
    i = 4;
    printf("Value of number 5  %d\n", number[i]);

    printf("%d", number);
}