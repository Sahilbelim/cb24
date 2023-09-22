// write a program to print day of month 
#include<stdio.h>
void main()
{
    int month;


    printf("Enter Month : ");
    scanf("%d", &month);
    printf("\nMonth : %d \n\n",month);

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("Day of month is 31 ");
    }
    else if (month==2)
    {
        printf("Day of month is 28/29");
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        printf("Day of month is 30 ");
    }  
    else
    {
        printf("Invalide input ");
    }
    
    printf("\n\nGood bye ");
}