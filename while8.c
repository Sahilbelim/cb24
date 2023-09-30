// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 ....300.
#include<stdio.h>
void main()
{
    int num1 = 2,num2=1;

    printf("%d , ", num1);
    printf("%d , ", num2);

    while (num1 < 123 )
    {
        num1 = num1 + num2; // 3
        printf("%d , ", num1);
        num2 = num1 + num2; // 4
        printf("%d , ", num2);
}
   
    
}