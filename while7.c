// 3] 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000

#include<stdio.h>
void main()
{

    int num = 1, temp = 1;
    
    while(num<=3000)
    {
        printf("%d , ", num);
        temp = temp + 3;  
        num = num + temp; 
    }
    // printf("%d , ", num);
    // temp = temp + 3;//4
    // num = num + temp;//5
    // printf("%d , ", num);
    // temp = temp + 3;
    // num = num + temp;
    // printf("%d , ", num);
    // temp = temp + 3;
    // num = num + temp;
    // printf("%d , ", num);
    // temp = temp + 3;
    // num = num + temp;
    // printf("%d , ", num);
    // temp = temp + 3;
    // num = num + temp;
    // printf("%d , ", num);
}