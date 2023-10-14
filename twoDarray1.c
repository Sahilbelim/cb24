#include<stdio.h>
void main()
{
    int num[3][2];

    num[0][0] = 10;
    num[0][1] = 20;
    num[1][0] = 50;
    num[1][1] = 80;
    num[2][0] = 90;
    num[2][1] = 100;

    printf("Number 1 %d \n", num[0][0]);
    printf("Number 2 %d \n", num[0][1]);
    printf("Number 3 %d \n", num[1][0]);
    printf("Number 4 %d \n", num[1][1]);
    printf("Number 5 %d \n", num[2][0]);
    printf("Number 6 %d \n", num[2][1]);


}