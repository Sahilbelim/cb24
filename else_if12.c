#include<stdio.h>
void main()
{
    int planet;

    printf("\n||||||||||||||||||||  Select any one number for any one planet ||||||||||||||| \n\n");
    printf(" 1 for murcury \n");
    printf(" 2 for Venus \n");
    printf(" 3 for Earth \n");
    printf(" 4 for mars \n");
    printf(" 5 for jupiter  \n");
    printf(" 6 for surturn \n");
    printf(" 7 for uranus \n");
    printf(" 8 for neptune \n\n");

    printf("Enter number of planet : ");
    scanf("%d", &planet);

    printf("\nNumber of planet %d \n\n", planet);

    if(planet==1)
    {
        printf("Distance of murcury to sum 57,910,006 Km ");
    }
    else if (planet==2)
    {
        printf("Distance of Venus to sum 108,199,995 Km ");
    
    }
    else if (planet==3)
    {
        printf("Distance of Earth to sum 149,599,951 Km ");
        
    }
    else if (planet==4)
    {
        printf("Distance of Mars to sum 227,939,920 Km ");
    }
    else if (planet==5)
    {
        printf("Distance of jupiter to sum 778,330,257 Km ");
        
    }
    else if (planet==6)
    {
        printf("Distance of saturn to sum 1,429,400,028 Km ");
        
    }
    else if (planet==7)
    {
        
        printf("Distance of uranus  to sum 2,870,989,228 Km ");
    }
    else if (planet==8)
    {
        
        printf("Distance of neptune  to sum 4,504,299,579 Km ");
    }
    else 
    {
        printf("Invalide input number of planet is not exist ");
    }

    // printf("\nGood bye ");
}