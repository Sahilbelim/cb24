// write a program to check number negetive or not, if negetive to convert int to possitive
#include<stdio.h>
void main()
{
    int number;

    printf("Enter Value of Number : ");
    scanf("%d", &number);

    // printf("Value of Number : %d ", number);

    if(number>0)
    {
        printf("\nNumber is possitive and Value of number %d \n", number);
    }
    else if (number==0)
    {
        printf("\nNumber is Zero \n");
    }
    else
    {
        number = number * (-1);
        printf("\nNumber is negetive and Value of number %d \n", number);
        
    }

    printf("\nGood bye .");
}