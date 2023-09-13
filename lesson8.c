//  write a progrma to find bmi 
#include<stdio.h>
void main()
{
    float weight, height, bmi;
    weight = 45.36;
    height = 1.370;

    printf("Weight is %.2f and height is %.2f \n", weight, height);
    bmi = weight / (height * height);
    printf("Bmi = %.2f ", bmi);

}