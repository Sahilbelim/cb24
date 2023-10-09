// hollow inverted pyramid

#include<stdio.h>
void main()
{
    int i,j,k;
    k = 5;
    for (i = 1; i <= 5;i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            if(i==1 || j==1 || k==j)
            {
            printf("* ",k,j);

            }
            else
            {
            printf("  ");
            }
        }
        printf("\n");
        k--;
    }

}