// wrire a program to find area of cylinder take input from user using scanf.
#include<stdio.h>
void  main()
{
    float r, h, pi, area;
    pi = 3.141592;
    printf("Enter Value of Radius : ");
    scanf("%f", &r);
    printf("Enter Value of Height : ");
    scanf("%f", &h);

    printf("\nValue of Radius : %.4f \n\n", r);
    printf("VAlue of Height : %.4f \n\n", h);

    area = (2 * pi * r * h) + (2 * pi * (r * r));

    printf("Area of Cylinder is  %.4f \n", area);
}