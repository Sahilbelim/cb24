#include <stdio.h>
struct triangle
{
    int height;
    int base;
    float area;
} t1, t2;

float get_area(struct triangle t)
{
    printf("\nEnter Height of Triangle ");
    scanf("%d", &t.height);
    printf("Enter Height of Triangle ");
    scanf("%d", &t.base);
   
    t.area = (t.height * t.base) / 2;
    printf("Area of Triangle : %.2f\n", t.area);
    return t.area;   
}

void main()
{

    printf("Tringle 1: \n\n");
    t1.area=get_area(t1);

    printf("\n%.2f", t1.area);
}