#include<stdio.h>
void main()
{
    int col, row, temp;

    row = 1;
    temp = 5;
    while(row<=5)
    {
        col = 1;
        while (col <= row)
        {
            printf(" ");
            col++;
        }
        col = 1;
        while (col <= temp)
        {
            printf("* ");
            col++;
        }
        printf("\n");
        row++;
        temp--;
   }
}