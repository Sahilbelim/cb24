// Check if a triangle is equilateral, isosceles, or scalene.(lenth)
#include<stdio.h>
void main()
{
    int lenth1, lenth2, lenth3;
    printf("Enter Lenth 1 of Triangle ");
    scanf("%d", &lenth1);
    printf("Enter Lenth 2 of Triangle ");
    scanf("%d", &lenth2);
    printf("Enter Lenth 3 of Triangle ");
    scanf("%d", &lenth3);

    // printf(" First Lenth of Triagle %d \n", lenth1);
    // printf(" Second Lenth of Triagle %d \n", lenth2);
    // printf(" third Lenth of Triagle %d \n", lenth3);

    if (lenth1==lenth2 && lenth1==lenth3)
    {
        printf("\nThis is Equilateral Triangle \n");
    }
    else if (lenth1==lenth2 ||  lenth1==lenth3 || lenth2==lenth3 )
    {
        printf("\nThis is isosceles Triangle \n");
    }
    else
    {
        printf("\nThis is scalene Triangle \n");
    }
    
}