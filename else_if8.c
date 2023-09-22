// write a program to print day of month 
#include<stdio.h>
void main()
{
    int month;

    printf("Enter Month : ");
    scanf("%d", &month);
    printf("\nMonth : %d \n\n",month);

    if(month==1)
    {
        printf("Day of month is 31 ");
    }
    else if (month==2)
    {
        printf("Day of month is 28/29");
    }
    else if (month==3)
    {
        printf("Day of month is 31 ");
    }
    else if (month==4)
    {
        printf("Day of month is 30 ");
    }
    else if (month==5)
    {
        printf("Day of month is 31 ");
    }
    else if (month==6)
    {
        printf("Day of month is 30 ");
    }
    else if (month==7)
    {
        printf("Day of month is 31 ");
    }
    else if (month==8)
    {
        printf("Day of month is 31 ");
    }
    else if (month==9)
    {
        printf("Day of month is 30 ");
    }
    else if (month==10)
    {
        printf("Day of month is 31 ");
    }
    else if (month==11)
    {
        printf("Day of month is 30 ");
    }
    else if (month==12)
    {
        printf("Day of month is 31 ");
    }
    else
    {
        printf("Invalide input ");
    }
    
    printf("\n\nGood bye ");
}