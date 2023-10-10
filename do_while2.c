#include<stdio.h>
void main()
{
    int number,i;

    printf("Enter Value of number  : ");
    scanf("%d", &number);

    printf("Value of number : %d \n\n", number);

    i = 1;
    do{
        printf("%d , ",i);
        i++;
    } while (i<=number);
}