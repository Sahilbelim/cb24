
// wrire a program to find area of triangle, circle, cylinder, qure, and also check to user continue with program if yes then continue or no then stop.

#include<stdio.h>
void main()
{
    int number;
    float height, base, radius, area,pi;
    pi = 3.1415928;

    

    do{

        printf("\nSelect any one opreaction \n\n");
        printf("find area of triangle to select : 1  \n");
        printf("find area of circle to select   : 2  \n");
        printf("find area of cylinder to select : 3  \n");
        printf("find area of squre to select     : 4  \n");

        printf("Select Option  : ");
        scanf("%d", &number);

        if (number == 1)
        {
            printf("Enter Value of Triangle \n");
            printf("Enter Height : ");
            scanf("%f", &height);
            printf("Enter Base : ");
            scanf("%f", &base);

            area = (height * base) / 2;

            printf("Area of Triangle : %.2f \n", area);
        }
        else if (number == 2)
        {
            printf("Enter Value of Circle \n");
            printf("Enter Radius : ");
            scanf("%f", &radius);

            area = pi * (radius * radius);

            printf("Area of Circle : %.2f \n", area);
        }
        else if (number == 3)
        {
            printf("Enter Value of Cylinder  \n");
            printf("Enter Height : ");
            scanf("%f", &height);
            printf("Enter Radius : ");
            scanf("%f", &radius);

            area = (2 * pi * radius * height) + (2 * pi * (radius * radius));

            printf("Area of Cylinder : %.2f \n", area);
        }
        else if (number == 4)
        {
            printf("Enter Value of squre  \n");
            printf("Enter lenth  : ");
            scanf("%f", &height);

            area = height * height;

            printf("Area of squre : %.2f \n", area);
        }
        else
        {
            printf("Invalide input select number from 1 to 4 \n");
        }
        printf("If  exit to enter 0 ");
        scanf("%d", &number);

    } while (number!=0);
}