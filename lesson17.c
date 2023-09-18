#include<stdio.h>
void main()
{
  
    float tax, income, rate,y_income,total_income;

    printf("Enter Your monthly income : ");
    scanf("%f", &income);
    
    printf("Enter Taxe Rate : ");
    scanf("%f", &rate);

    printf("\nValue of Monthly income : %.2f \n", income);
    printf("\n Value of Taxe Rate : %.2f \n", rate);

    y_income = 12 * income;

    tax = (y_income * rate) / 100;

    total_income = y_income - tax;

    printf("\nFinal Yearly Income is %.2f \n", total_income);
}