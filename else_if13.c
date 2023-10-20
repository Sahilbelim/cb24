#include <stdio.h>
void main()
{
    int month, date;

    printf("Enter Value of month ");
    scanf("%d", &month);
    printf("Enter Value of date ");
    scanf("%d", &date);

    printf("\nValue of month : %d \n\n", month);
    printf("Value of date  : %d\n\n", date);

       if ((month == 3 && date >= 21 && date <= 31) || (month == 4 && date >= 1 && date <= 19))
    {
        printf("Symbol : The Ram and Zodiac sign : Aries \n");
    }

    else if ((month == 4 && date >= 20 && date <= 30) || (month == 5 && date >= 1 && date <= 20))
    {
        printf("Symbol : The Bull and Zodiac sign : Taurus \n");
    }

    else if ((month == 5 && date >= 21 && date <= 31) || (month == 6 && date >= 1 && date <= 20))
    {
        printf("Symbol : The twins and Zodiac Sign : Gemini \n");
    }

    else if ((month == 6 && date >= 21 && date <= 30) || (month == 7 && date >= 1 && date <= 22))
    {
        printf("Symbol : The Crabe and Zodiac Sign : Cencer \n");
    }

    else if ((month == 7 && date >= 23 && date <= 31) || (month == 8 && date >= 1 && date <= 22))
    {
        printf("Symbol : The Lion and Zodiac Sign : Leo \n");
    }

    else if ((month == 8 && date >= 23 && date <= 31) || (month == 9 && date >= 1 && date <= 22))
    {
        printf("Symbol : The virgin and Zodiac Sign : Virgo \n");
    }

    else if ((month == 9 && date >= 23 && date <= 30) || (month == 10 && date >= 1 && date <= 22))
    {
        printf("Symbol : The Scales and Zodiac Sign : Libra \n");
    }

    else if ((month == 10 && date >= 23 && date <= 31) || (month == 11 && date >= 1 && date <= 21))
    {
        printf("Symbol : The scopion and Zodiac Sign : Scorpio \n");
    }

    else if ((month == 11 && date >= 22 && date <= 30) || (month == 12 && date >= 1 && date <= 21))
    {
        printf("Symbol : The Archer and Zodiac Sign : Sagittiarius \n");
    }

    else if ((month == 12 && date >= 22 && date <= 31) || (month == 1 && date >= 1 && date <= 19))
    {
        printf("Symbol : The Goat and Zodiac Sign : Capricorn \n");
    }

    else if ((month == 1 && date >= 20 && date <= 31) || (month == 2 && date >= 1 && date <= 18))
    {
        printf("Symbol : The Water Bearer and Zodiac Sign : Aqurius \n");
    }

    else if ((month == 2 && date >= 19 && date <= 29) || (month == 3 && date >= 1 && date <= 20))
    {
        printf("Symbol : The Fishes and Zodiac Sign : pisces \n");
    }

    else
    {
        printf("Invalide Date and month ");
    }
    printf("\n\nGood bye ");
}