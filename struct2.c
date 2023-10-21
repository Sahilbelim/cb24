#include<stdio.h>
struct triangle
{
    int height;
    int base;
    float area;
}t1,t2;
void main()
{
    t1.height = 10;
    t1.base = 10;
    t1.area = (t1.height * t1.base)/2;

    printf("Area of Triangle : %.2f\n", t1.area);

    t2.height = 11;
    t2.base = 13;
    t2.area = (t2.height * t2.base) / 2;
    printf("Area of Triangle : %.2f\n", t2.area);
}