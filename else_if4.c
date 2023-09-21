// Check if a character is a vowel or a consonant.
#include<stdio.h>
void main()
{
    char letter;

    printf("Enter Value of letter ");
    scanf("%c", &letter);

    printf("Value of letter is %c \n\n",letter);

    if(letter=='a')
    {
        printf("It's vowel \n");
    }
    else if (letter=='e')
    {
        printf("It's vowel \n");
    }
    else if (letter=='i')
    {
        printf("It's vowel \n");
    }
    else if (letter=='o')
    {
        printf("It's vowel \n");
    }
    else if (letter=='u')
    {
        printf("It's vowel \n");
    }
     else
     {
        printf("It's consonant \n");
     }

     printf("Good bye ");
}