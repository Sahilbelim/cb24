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
float Div(float num1, float num2)
{
    // float div = 0;
    return (num1 / num2);
}
int Mul(int mul1, int mul2)
{
    int mul = 0;

    mul = mul1 * mul2;
    return mul;
}

int Mod(int mod1, int mod2)
{
    int mod = 0;

    mod = mod1 % mod2;
    return mod;
}

void main()
{
    int Choise;
    float number1, number2, Ans=0;
 do   
{
    printf("Choose number for Oparetion \n\n");
    printf(" 1 for Addition \n");
    printf(" 2 for Subtraction \n");
    printf(" 3 for Multiplication  \n");
    printf(" 4 for Division  \n");
    printf("\n Enter Number : ");
    scanf("%d", & Choise);



    if(Choise<=4 && Choise>=1)
    {
        printf("Enter Value of Number 1 : ");
        scanf("%f", &number1);

        printf("Enter Value of Number 2 : ");
        scanf("%f", &number2);
    }

    switch (Choise)
    {
    case 1:
      Ans = Add(number1, number2);
      break;
    case 2:
      Ans = Sub(number1, number2);
      break;
    case 3:
      Ans = Mul(number1, number2);
      break;
    case 4:
      Ans = Div(number1, number2);
      break;
    default:

      printf("Invalide Input ");
      break;
    }

    printf("Answer Of Give Oparetion %.2f\n", Ans);

    printf("If Exit  then Enter  5  : << ");
    scanf("%d",& Choise);
} while (Choise!=5);
}

