#include <stdio.h>
void main()
{
    int month, year;

    printf("Enter month : ");
    scanf("%d", &month);
    printf("Enter Year  : ");
    scanf("%d", &year);

    printf("Month : %d \n\n", month);
    printf("\nYear  : %d \n\n", year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("given year  and month of days are 31 ");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("given year  and month of days are 30 ");
    }
    else if (month == 2)
    {
        if ((year % 4) == 0)
        {
            printf("given year  and month of days are 29 ");
        }
        else
        {
            printf("given year  and month of days are 28 ");
        }
    }
    else
    {
        printf("Invalide month or Year ");
    }

    printf("\n\nGood bye .");
}