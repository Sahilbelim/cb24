// 10 : 1 + 4 + 9 + 16 + 25 + 36 + 49 + 64 + 81 + 100 = ?

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
        printf("+ %d\n", (i * i));
        add = add + (i*i);
    }
    printf("----------\n");
    printf("%d\n", add);
    printf("Addition of All numbers %d ", add);


}