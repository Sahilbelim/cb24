// 5 != 5x4x3x2x1

#include<stdio.h>
void main()
{

    int number,fact;
    fact = 1;
    printf("Enter Value of number : ");
    scanf("%d", &number);

    // printf("Value of number : %d ", number);

    for (int i = number; i >= 1;i--)
    {
        fact = fact * i;
    }

    printf("%d! = %d", number, fact);
    
}