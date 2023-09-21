// Check if a character is a vowel or a consonant.
#include<stdio.h>
void main()
{
    char letter;

    printf("Enter Value of letter ");
    scanf("%c", &letter);

    printf("Value of letter is %c \n\n",letter);

    if (letter == 'a' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'e' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("It's vowel \n");
    }
    
     else
     {
        printf("It's consonant \n");
     }

     printf("Good bye ");
}