#include <stdio.h>
void main()
{

    int i,j;

    i = 1;
    while (i<=5)
    {
        j = 1;
        while (j <= i)
        {
            if(j==1 || i==5 || i==j)
            {
            printf("* ");
            }
            else
            {
            printf("  ");

            }
            j++;
        }
        printf("\n");
        i++;
    }

}