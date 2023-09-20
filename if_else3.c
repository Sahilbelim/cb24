// write a program to findout whether given year is leap year or not(using if else)
#include<stdio.h>
void main()
{
    int year;

    printf("Enter Year : ");
    scanf("%d", &year);

    printf("\nValue of Year is %d \n",year);

    if((year%4)==0)
    {
        printf("Year is leap year .\n");
    }
    else
    {
        printf("Year not a leap year .\n");

    }
}