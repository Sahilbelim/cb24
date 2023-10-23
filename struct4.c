#include <stdio.h>
struct triangle
{
    int height;
    int base;
    float area;
};
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
    int size,i;

    printf("Enter Number of Tringle ");
    scanf("%d", &size);

    struct triangle t[size];
 
    for ( i = 0; i < size;i++)
    {
        printf("Enter Value of Tringle %d: \n",i+1);
        t[i].area = get_area(t[i]);
    }
}