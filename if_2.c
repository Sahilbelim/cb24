// write a program to find income taxe income : 5 lk taxe rate : 5 %.
#include<stdio.h>
void main()
{
    float income,y_income,tax,total;

    printf("Enter your monthly  income  : ");
    scanf("%f", &income);
    y_income = income * 12;
    tax = 0;
    if(y_income>500000)
    {
        // printf("\n Your income grater then 5 lakh \n\n");
        tax = (y_income * 5) / 100;
    }
    total = y_income - tax;
    printf("\nFinal income is %.2f\n ", total);
}