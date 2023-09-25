// Check if a character is a vowel or a consonant.
#include<stdio.h>
void main()
{
    char letter;

    printf("Enter Letter ");
    scanf("%c", &letter);

    printf("\nLetter is %c \n\n", letter);

    switch(letter)
    {

        case 'a':
            printf("Letter is Vowel ");
        break;

        case 'e':
            printf("Letter is Vowel ");
        break;  

        case 'i':
            printf("Letter is Vowel ");
        break;

        case 'o':
            printf("Letter is Vowel ");
        break;

        case 'u':
            printf("Letter is Vowel ");
        break;

        case 'A':
            printf("Letter is Vowel ");
        break;

        case 'E':
            printf("Letter is Vowel ");
        break;

        case 'I':
            printf("Letter is Vowel ");
        break;

        case 'O':
            printf("Letter is Vowel ");
        break;

        case 'U':
            printf("Letter is Vowel ");
        break;

        default:
            printf("Letter is consonant");
        break;

    }
    printf("\n\nGood bye");
}