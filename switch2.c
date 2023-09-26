#include <stdio.h>
void main()
{
    int number, first, second;

    printf("Enter any two digit number ");
    scanf("%d", &number);

    if (number > 99 ||  number < 10)
    {
        printf("Invalide number Enter only two digit number ");
    }
    else
    {

        printf("Value of number %d \n", number); // 45

        first = number / 10;  // 4
        second = number % 10; // 5

        printf("First number is %d and second number is %d \n\n", first, second);

        printf("First number : ");
        switch (first)
        {
        case 1:
            printf("ONE");
            break;
        case 2:
            printf("TWO");
            break;
        case 3:
            printf("THREE");
            break;
        case 4:
            printf("FOUR");
            break;
        case 5:
            printf("FIVE");
            break;
        case 6:
            printf("SIX");
            break;
        case 7:
            printf("SEVEN");
            break;
        case 8:
            printf("EIGHT");
            break;
        case 9:
            printf("NINE");
            break;
        case 0:
            printf("ZERO");
            break;
        default:
            printf("Invalide number ");
            break;
        }
        printf("  Second number :  ");
        switch (second)
        {
        case 1:
            printf("ONE");
            break;
        case 2:
            printf("TWO");
            break;
        case 3:
            printf("THREE");
            break;
        case 4:
            printf("FOUR");
            break;
        case 5:
            printf("FIVE");
            break;
        case 6:
            printf("SIX");
            break;
        case 7:
            printf("SEVEN");
            break;
        case 8:
            printf("EIGHT");
            break;
        case 9:
            printf("NINE");
            break;
        case 0:
            printf("ZERO");
            break;
        default:
            printf("Invalide number ");
            break;
        }
    }
}