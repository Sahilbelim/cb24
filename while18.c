// full  pyramid
/*
step 1

_*

step 2

_____*****

step 3

_____*****
_____*****
_____*****
_____*****
_____*****

step 4

_____*
____* *
___* * *
__* * * *
_* * * * *

*/

#include <stdio.h>
void main()
{

    int col,row,temp;
    temp = 5;
    row = 1;
    while (row<=5)
    {
        col = 1;

        while (col <= temp)
        {
            printf(" ");
            col++;
        }

        col = 1;
        while (col <= row)
        {
            printf("* ");
            col++;
        }
        printf("\n");
        row++;
        temp--;
   }

    // col = 1;
    // while (col <= 5)
    // {
    //     printf("_");
    //     col++;
    // }
    // col = 1;
    // while (col <= 5)
    // {
    //     printf("*");
    //     col++;
    // }
    // printf("\n");

    // col = 1;
    // while (col <= 5)
    // {
    //     printf("_");
    //     col++;
    // }
    // col = 1;
    // while(col<=5)
    // {
    //     printf("*");
    //     col++;
    // }
    //     printf("\n");

    //     col = 1;
    //     while (col <= 5)
    //     {
    //     printf("_");
    //     col++;
    //     }
    //     col = 1;
    //     while (col <= 5)
    //     {
    //     printf("*");
    //     col++;
    //     }
    //     printf("\n");
    //     col = 1;
    //     while (col <= 5)
    //     {
    //     printf("_");
    //     col++;
    //     }
    //     col = 1;
    //     while (col <= 5)
    //     {
    //     printf("*");
    //     col++;
    //     }
    //     printf("\n");
}
