// 2, 4, 6, 8, 10...........300;
#include <stdio.h>
void main()
{
    int num;
    num = 2;

    while (num <= 300)
    {
        printf("%d ,", num);
        num = num + 2;
    }
}