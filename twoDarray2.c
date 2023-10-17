#include <stdio.h>
void main()
{
    int student, subject,scolerStudent=0;

    printf("Enter number of Student : ");
    scanf("%d", &student);
    printf("Enter number of Subject : ");
    scanf("%d", &subject);

    int marks[student][subject], i, j,sum[student];
    float avg[student],max;

// get input From user
    for (i = 0; i < student; i++)
    {
        printf("Enter student %d marks : \n", (i + 1));

        for (j = 0; j < subject; j++)
        {
            printf("Enter marks of subject %d : ", (j + 1));
            scanf("%d", &marks[i][j]);
        }
    }
    printf("___________________________________________\n\n");

//print student marks and total .

    for (i = 0; i < student; i++)
    {
        sum[i] = 0;
        printf("\n\tMarks of Student %d  \n\n",i+1);
        for (j = 0; j < subject; j++)
        {
            sum[i] = sum[i] + marks[i][j];
            printf("\tSubject %d : %d \n",j+1, marks[i][j]);
        }
        avg[i] = (sum[i] / subject);
        printf("\tTotal Marks : %d \n", sum[i]);
        printf("\tpersentile : %.2f \n", avg[i]);
        printf("___________________________________________\n\n");
    }

// check scoler student .

    max = avg[0];

    for (i = 0; i < student;i++)
    {
        if (max < avg[i])
        {
            max = avg[i];
            scolerStudent = i+1;
        }
   }
   
   printf("Scoler student is %d and persentile :%.2f\n\n",scolerStudent, max);
   // if(max<avg[1])
   // {
   //     max = avg[1];

   // }

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