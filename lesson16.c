// wrire a program to fing electricity bill .take a unit and amout and text rate. 
#include<stdio.h>
void main()
{
    float unit,price,amount,tax,total_amount;
    printf("Enter Value of Unit ");
    scanf("%f", &unit);
    printf("Enter Value of Price ");
    scanf("%f", &price);

    printf("\nValue of Unit : %.2f \n", unit);
    printf("\nValue of Price: %.2f \n", price);

    amount = unit * price;

    tax = (amount * 5) / 100;

    total_amount = amount + tax;
    printf("\nTotal Amount is %.2f \n", total_amount);
    
}