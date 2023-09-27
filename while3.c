#include<stdio.h>
void main()
{
    int number, count=1;
    // number = 10;
    printf("Enter Value of number : ");
    scanf("%d", &number);

    while(count<=number)
   {
       printf("%d , ", count);
       count = count + 1;
   }
    

}