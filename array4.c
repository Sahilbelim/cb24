#include <stdio.h>
void main()
{
    int size, i,sum;

    printf("Enter Value of Size of numbers  : ");
    scanf("%d", &size);

    int number[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter Value of number %d : ",i+1);
        scanf("%d", &number[i]);

    }

    for (i = 0; i < size;i++)
    {
        printf("Value of number %d : %d \n",(i+1), number[i]);
    }

    sum = 0;

    for (i = 0; i < size;i++)
    {
        sum = sum + number[i];
    } 
    // sum = sum + number[1];
    // sum = sum + number[2];
    // sum = sum + number[3];
    // sum = sum + number[4];

    printf("Addition of All number : %d ",sum);
}