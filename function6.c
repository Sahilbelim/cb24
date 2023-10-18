#include<stdio.h>

int Add(int n1,int n2)
{
    int add;
    add = n1 + n2;

    return add;
}

int Sub(int a,int b)
{
    float sub = 0;
    if(a>=b)
         return (a - b);

    else
      return  (b - a);

 
}
void main()
{
    int number1, number2,addition,sub;

    printf("Enter Value of Number 1 : ");
    scanf("%d", &number1);

    printf("Enter Value of Number 2 : ");
    scanf("%d", &number2);

    addition = Add(number1, number2);

    printf("Addition of Given number %d \n", addition);

    sub = Sub(number1, number2);

    printf("Substraction of Given number %d \n", sub);

}

/*
int Sub(int a,int b)
{
    float sub = 0;
    if(a>=b)
    {
         return (a - b);

    }

    else
    {
        return  (b - a);

    }

}
*/