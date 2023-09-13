
#include<stdio.h>
void main()
{
    float height, base, area;

    height = 75;
    base = 6;
    printf("Value of Height is %.2f \n", height);
    printf("Value of Base is %.2f \n",base);

    area = (height * base) / 2;

    printf("Area of Triangle is %.2f", area);
}