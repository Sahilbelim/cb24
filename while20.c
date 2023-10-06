#include<stdio.h>
void main()
{
    int col,row,temp,lineNumber;
    printf("Enter  Number of line  ");
    scanf("%d", &lineNumber);
    row = 1;
    temp = lineNumber;
    while(row<=lineNumber)
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