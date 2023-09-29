// 1 4 9 16 25 ... 10000
#include<stdio.h>
void main()
{
    int temp=1,flash=1;

    while (temp<=10000)
    {
        printf("%d , ", temp);
        flash = flash + 2;
        temp = temp + flash; 
    }

    // printf("%d , ", temp);
    // flash = flash + 2;//3
    // temp = temp + flash; // 4
    // printf("%d , ", temp);
    // flash = flash + 2;
    // temp = temp + flash;//9
    // printf("%d , ", temp);
    // flash = flash + 2;
    // temp = temp + flash;//16
    // printf("%d , ", temp);
    // flash = flash + 2;
    // temp = temp + flash ;//25
    // printf("%d , ", temp);
    // flash = flash + 2;
    // temp = temp + flash; // 36
    // printf("%d , ", temp);

}