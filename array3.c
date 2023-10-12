#include <stdio.h>
void main()
{
    int number[5],i;

    for (i = 0; i < 5;i++)
    {
        printf("Enter Value of number %d :  ",(i+1));
        scanf("%d", &number[i]);
    }

    // printf("Enter Value of number 1 ");
    // scanf("%d", &number[0]);
    // printf("Enter Value of number 2 ");
    // scanf("%d", &number[1]);
    // printf("Enter Value of number 3 ");
    // scanf("%d", &number[2]);
    // printf("Enter Value of number 4 ");
    // scanf("%d", &number[3]);
    // printf("Enter Value of number 5 ");
    // scanf("%d", &number[4]);
    for (i = 0; i < 5;i++)
    {
        printf("Value of number %d : %d \n",(i+1), number[i]);
    }
    // printf("Value of number 1 : %d \n", number[0]);
    // printf("Value of number 2 : %d \n", number[1]);
    // printf("Value of number 3 : %d \n", number[2]);
    // printf("Value of number 4 : %d \n", number[3]);
    // printf("Value of number 5 : %d \n", number[4]);
}