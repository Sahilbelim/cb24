#include <stdio.h>
void printsymbol(int num, char s)
{
    int i;

    for (i = 1; i <= num; i++)
    {
        printf("%c", s);
    }
    printf("\n");
}
void main()
{
    char symbol;
    int size, i;

    printf("Enter symbol : ");
    scanf("%c", &symbol);
    printf("Enter number of symbol : ");
    scanf("%d", &size);

    // printsymbol(5,'='); fix value
    printsymbol(size, symbol);
    printf("Name : sahl belim \n");
    printsymbol(size, symbol);
    printf("Age : 18 \n");
    printsymbol(size, symbol);
    printf("Number : 9924254332 \n");
    printsymbol(size, symbol);
    printf("Email : sahil@gmail.com \n");
    printsymbol(size, symbol);
}
