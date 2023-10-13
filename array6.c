// wrire a program to print your name using array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,num;
    printf("Enter size of name : ");
    scanf("%d", &num);

    char name[num];
    printf("Enter Your Name : \n");

    for (i = 0; i < num;i++)
    {
         fflush(stdin);
        scanf("%c", &name[i]);
      
    }

    printf("name : ");

    for (i = 0; i < num;i++)
    {
        printf("%c", name[i]);
        
    }
}