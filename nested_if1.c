#include<stdio.h>
void main()
{
    int number1, number2, number3;

    printf("Enter Value of number 1 ");
    scanf("%d", &number1);
    printf("Enter Value of number 2 ");
    scanf("%d", &number2);
    printf("Enter Value of number 3 ");
    scanf("%d", &number3);

    printf("\nValue of number 1 : %d \n\n",number1);
    printf("Value of number 2 : %d \n\n",number2);
    printf("Value of number 3 : %d \n\n",number3);


    if(number1>number2)
    {
        if(number1>number3)
        {
            printf("Number 1 is bigger then number 2 and 3 ");
        }
        else
        {
            if(number1==number3)
            {
            printf("Both are same  1 and 3 ");

            }
            else
            {

            printf("Number 3 is bigger then number 1 and 2");
            
            }

        }
    }
    else if (number2>number1)
    {
        if (number2>number3)
        {
            printf("Number 2 is bigger then number 1 and 3 ");
        }
        else
        {

            if (number2 == number3)
            {
            printf("Both are same  2 and 3 ");
            }
            else
            {
            printf("Number 3 is bigger then 1 and 2  ");

            }
        }
        
    }
   else
   {
      if(number1==number2 && number1==number3)
      {
            printf("All are same ");
      }
      else
      {
            printf("Both are same  1 and 2 ");
      }
   } 

}