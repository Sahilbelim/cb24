#include<stdio.h>
void main()
{
    int month, date;

    printf("Enter Value of month ");
    scanf("%d", &month);
    printf("Enter Value of date ");
    scanf("%d", &date);

    printf("\nValue of month : %d \n\n", month);
    printf("Value of date  : %d\n\n", date);

    if((month==3 && date>=21 && date<=31))
    {
        printf("Symbol the ram and zodiac sign is arias ");
    }
    else if (month==4 && date>=1 && date<=19)
    {
        printf("Symbol the ram and zodiac sign is arias ");
    }
    else if (month==4 && date>=20 && date<=30)
    {
        printf("Symbol the bull and zodiac sign is taurus ");
    }

    else if (month==5 && date>=1 && date<=20 )
    {
        printf("Symbol the bull and zodiac sign is taurus ");
    }
    else if (month==5 && date>=21 && date<=31)
    {
        printf("Symbol the twins and zodiac sign is gemini ");
    }
    else if (month==6 && date>=1 && date<=20)
    {
        printf("Symbol the twins and zodiac sign is gemini ");
    }
    else if (month==6 && date>=21 && date<=30)
    {
        printf("Symbol the crab and zodiac sign is cencer ");

    }
    
    else if (month==7 && date>=1 && date<=22)
    {
        printf("Symbol the crab and zodiac sign is cencer ");
    }
    
    else if (month==7 && date>=23 && date<=31)
    {
        printf("Symbol the lion and zodiac sign is leo ");

    }
    
    else if (month==8 && date>=1 && date<=22)
    {
                printf("Symbol the lion and zodiac sign is leo ");
    }
    
    else if (month==8 && date>=23 && date<=31)
    {
                printf("Symbol the virgo and zodiac sign is virgin ");

    }
    
    else if (month==9 && date>=1 && date<=22)
    {
                printf("Symbol the virgo and zodiac sign is virgin ");
    }
    
    else if (month==9 && date>=23 && date<=30)
    {
                printf("Symbol the scales and zodiac sign is libra ");
    }
    
    else if (month==10 && date>=1 && date<=22)
    {
                printf("Symbol the scales and zodiac sign is libra ");
    }
    
    else if (month==10 && date>=23 && date<=31)
    {
                printf("Symbol the scorpion and zodiac sign is scorpio ");
    }
    
    else if (month==11 && date>=1 && date<=21)
    {
                printf("Symbol the scorpion and zodiac sign is scorpio ");
    }
    
    else if (month==11 && date>=22 && date<=30)
    {
                printf("Symbol the Archer and zodiac sign is segittarius ");

    }
    
    else if (month==12 && date>=1 && date<=21)
    {
                printf("Symbol the Archer and zodiac sign is segittarius ");
    }
    
    else if (month==12 && date>=22 && date<=31)
    {
                printf("Symbol the goat and zodiac sign is capricorn ");

    }
    
    else if (month==1 && date>=1 && date<=19)
    {
                printf("Symbol the goat and zodiac sign is capricorn ");
    }
    
    else if (month==1 && date>=20 && date<=31)
    {
                printf("Symbol the water bearer and zodiac sign is aquarius ");

    }
    
    else if (month==2 && date>=1 && date<=18)
    {
                printf("Symbol the water bearer and zodiac sign is aquarius ");
    }
    
        else if (month==2 && date>=19 && date<=29)
        {
                    printf("Symbol the fishes and zodiac sign is pisces ");

        }
        
        else if (month==3 && date>=1 && date<=20)
        {
                    printf("Symbol the fishes and zodiac sign is pisces ");
        }
                
        else 
        {
                    printf("Invalide input ");

        }

        printf("\n\nGood bye ");
}