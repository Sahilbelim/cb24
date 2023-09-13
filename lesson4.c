#include <stdio.h>
void main()
{
    int num,num2;
    num = 8;
    num2 = 2;

    printf(" %d x 1 = %d \n", num, (num * 1));
    printf(" %d x 2 = %d \n", num, (num * 2));
    printf(" %d x 3 = %d \n", num, (num * 3));
    printf(" %d x 4 = %d \n", num, (num * 4));
    printf(" %d x 5 = %d \n", num, (num * 5));
    printf(" %d x 6 = %d \n", num, (num * 6));
    printf(" %d x 7 = %d \n", num, (num * 7));
    printf(" %d x 8 = %d \n", num, (num * 8));
    printf(" %d x 9 = %d \n", num, (num * 9));
    printf(" %d x 10 = %d \n", num, (num * 10));

    printf("addition is %d ", (num + num2));
    printf("subtrsction  is %d ", (num - num2));
    printf("multiplication   is %d ", (num * num2));
    printf("division  is %d ", (num / num2));
    printf("module  is %d ", (num % num2));
}