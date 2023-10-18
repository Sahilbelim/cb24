#include<stdio.h>

void getArea(float r,float h)
{
    float area, pi = 3.1415926;
    area = (2 * pi * r * h) + (2 * pi * (r * r));

    printf("Area of Cylinder : %.2f\n", area);
}


void main()
{
    float  radius, height;
   
    printf("Enter Value of radius ");
    scanf("%f", &radius);
    printf("Enter Value of Height : ");
    scanf("%f", &height);

    // getArea(10, 10);
    getArea(radius, height);
}