// 10 : 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55


#include<stdio.h>
void main()
{
    int number,add;
    add = 0;
    printf("Enter Value of Number : ");
    scanf("%d", &number);

    // printf("Value of number %d \n",number);
        
    for (int i = 1; i <= number;i++)
    {
        add = add + i;
    }
    printf("Addition of All numbers %d ", add);


}