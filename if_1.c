#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter Value of Number 1 ");
    scanf("%d", &num1);
    printf("Enter value of Number 2 ");
    scanf("%d", &num2);

    printf("Number 1 : %d", num1);
    printf("\nNumber 2 : %d", num2);

    if(num1==num2)
    {
        printf("\nNumber 1 and Number 2 both are same \n");
    }

    printf("Good bye");
}