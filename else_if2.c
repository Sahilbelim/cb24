/*
write a program to check grade
A  85 - 100
B  65 - 85
C  45 - 65
D  33 - 45
F  33>
*/

#include <stdio.h>
void main()
{
    float pr;

    printf("Enter your marks ");
    scanf("%f", &pr);

    // printf(" pr : %.2f ", pr);

    if (pr > 85 && pr <= 100)
    {
        printf("\nYour Grade is A \n");
    }
    else if (pr > 65 && pr <= 85)
    {
        printf("\nYour Grade is B \n");
    }
    else if (pr > 45 && pr <= 65)
    {
        printf("\nYour Grade is c \n");
    }
    else if (pr >= 33 && pr <= 45)
    {
        printf("\nYour Grade is D \n");
    }
    else if (pr<33)
    {
        printf("\nYour Grade is F you are fail  \n");
    }
    else
    {
        printf(" \n Invalide Input \n ,Your input : %.2f", pr);
    }
}