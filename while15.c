/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
#include <stdio.h>
void main()
{
    int j,i,count;
    count = 1;
    i = 1;
    while (i<=5)
    {

        j = 1;
        while (j <= i)
        {
            printf("%d ",count);
            count = count + 1;
            j++;
            // j = j + 1;
        }
        printf("\n");
        i++;
   }
}