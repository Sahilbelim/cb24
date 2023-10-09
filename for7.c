#include <stdio.h>
void main()
{
    int j,i,k;
    k = 5;
    for (i = 1; i <= 5;i++)
    {
        for (j = 1; j <=i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("* ");
        }
        printf("\n");
        k--;
    }
   
}