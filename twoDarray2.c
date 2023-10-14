#include <stdio.h>
void main()
{
    int marks[5][5],i,j;

    for (i = 0; i < 5;i++)
    {
        printf("Enter student %d marks : \n",(i+1));

        for (j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d : ", (j + 1));
            scanf("%d", &marks[i][j]);
        }
    }

    
    // printf("Enter marks of subject 1 : ");
    // scanf("%d", &marks[0][0]);
    // printf("Enter marks of subject 2 : ");
    // scanf("%d", &marks[0][1]);
    // printf("Enter marks of subject 3 : ");
    // scanf("%d", &marks[0][2]);
    // printf("Enter marks of subject 4 : ");
    // scanf("%d", &marks[0][3]);
    // printf("Enter marks of subject 5 : ");
    // scanf("%d", &marks[0][4]);

    /*
        printf("Enter student 1 marks : \n");

    for (j = 0; j < 5;j++)
    {
        printf("Enter marks of subject %d : ",(j+1));
        scanf("%d", &marks[0][j]);
    }

    printf("Enter student 2 marks : \n");
    for (j = 0; j < 5; j++)
    {
        printf("Enter marks of subject %d : ", (j + 1));
        scanf("%d", &marks[1][j]);
    }
    printf("Enter student 3 marks : \n");
    for (j = 0; j < 5; j++)
    {
        printf("Enter marks of subject %d : ", (j + 1));
        scanf("%d", &marks[2][j]);
    }
    printf("Enter student 4 marks : \n");
    for (j = 0; j < 5; j++)
    {
        printf("Enter marks of subject %d : ", (j + 1));
        scanf("%d", &marks[3][j]);
    }
    printf("Enter student 5 marks : \n");
    for (j = 0; j < 5; j++)
    {
        printf("Enter marks of subject %d : ", (j + 1));
        scanf("%d", &marks[4][j]);
    }
    */
}