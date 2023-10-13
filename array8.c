// wrire a program to find number of  area for triangle .

#include <stdio.h>
void main()
{
    int num, i,big=0;

    printf("Enter Number of Triangle : ");
    scanf("%d", &num);

    float height[num], base[num], area[num] ,max;

    for (i = 0; i < num; i++)
    {
        printf("Enter Value of Triangle %d : \n", (i + 1));

        printf("Enter Height : ");
        scanf("%f", &height[i]);
        printf("Enter Base : ");
        scanf("%f", &base[i]);
    }
    for (i = 0; i < num; i++)
    {
        printf("|||||||||||||||||||||||||||||| Value of Triangle %d  |||||||||||||||||||||||||||||||||\n\n", (i + 1));
        printf("Height : %.2f\n", height[i]);
        printf("Base : %.2f\n", base[i]);
        area[i] = (height[i] * base[i]) / 2;
        printf("|||||||||||||||||||||||||||||| Area of Triangle %d : %.2f  |||||||||||||||||||||||||||||||||\n", (i + 1), area[i]);
    }

    max=area[0];//10

    for (i = 0; i < num;i++)
    {
        if (max < area[i])
        {
            max = area[i];
            big = i;
        }
    }

    printf("MAximum area Of Triangle %.2f \n", max);
    printf("bigest Triangle %d \n",( big+1));
}