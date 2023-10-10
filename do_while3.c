#include<stdio.h>
void main()
{

    int number1, number2,operation,temp;
    temp = 200;

    printf("Enter Value of number 1 : ");
    scanf("%d", &number1);
    printf("Enter Value of number 2 : ");
    scanf("%d", &number2);
    do
    {
        printf("\nSelect Operation \n");
        printf("\n 1 for Addition ");
        printf("\n 2 for Subtraction ");
        printf("\n 3 for Multiplication ");
        printf("\n 4 for Division ");
        printf("\n 5 for Module ");
        printf("\n 6 for Exit ");
        printf("\n Enter number :  ");
        scanf("%d", &operation);

        switch (operation)
        {
        case 1:
            printf("\n|||||||||||||||||Addition of Given numbers %d |||||||||||||||||\n", (number1 + number2));
            break;
        case 2:
            printf("\n|||||||||||||||||Subtraction of Given numbers %d |||||||||||||||||\n", (number1 - number2));
            break;
        case 3:
            printf("\n|||||||||||||||||Multiplication of Given numbers %d |||||||||||||||||\n", (number1 * number2));
            break;
        case 4:
            printf("\n|||||||||||||||||Division of Given numbers %d |||||||||||||||||\n", (number1 / number2));
            break;
        case 5:
            printf("\n|||||||||||||||||Module of Given numbers %d |||||||||||||||||\n", (number1 % number2));
            break;

        case 6:
            temp = 404;
            break;
        default:
            printf("\n|||||||||||||||||Invalide number choose Valide number for  1 to 6 |||||||||||||||||\n ");
            break;
        }

        // printf("%d", temp);
    } while (temp != 404);
}