#include<stdio.h>
void main()
{
    int num,n1,n2;
    n1 = 10;
    n2 = 20;
    num = 45;

    printf("Number is %d \n", num);
    num = 85;
    printf("Number is %d \n", num);

    num = num + 5;
    
    printf("Number is %d \n", num);

    n1 = n1 + n2; //30
    n2 = n1 - n2; //10
    n1 = n1 - n2; //20
}