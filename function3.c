#include<stdio.h>

float getPi()
{
    float pi = 3.1415926;
    return pi;
    
}

void main()
{
    float pi,radius,area;

   pi = getPi();
    printf("Enter Value of Radius : ");
    scanf("%f", &radius);

    area = pi * (radius * radius);

    printf("Area of Circle : %.4f ", area);
}