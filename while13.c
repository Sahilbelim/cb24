/*
1
12
123
1234
12345


12345
12345
12345
12345
12345
*/
#include<stdio.h>
void main(){

    int col,row;

    row = 1;
    while (row <= 5)
    {
        col = 1;
        while (col <= row)
        {
            printf("%d ",col);
            col++;
        }
        printf("\n");
        row++;
     
   }
        
}