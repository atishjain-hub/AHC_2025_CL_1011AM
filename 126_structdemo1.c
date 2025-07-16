# include <stdio.h>

void main()
{
    //creating a user defined datatype
    struct student
    {
        int rollno;
        char name[20];
        float avg;
    };


    struct student s1,s2;
    printf("Enter student rollno:");
    scanf("%d",&s1.rollno);

    printf("Enter student name:");
    scanf("%s",&s1.name);

    printf("Enter student average marks:");
    scanf("%f",&s1.avg);


    printf("Enter student rollno:");
    scanf("%d",&s2.rollno);

    printf("Enter student name:");
    scanf("%s",&s2.name);

    printf("Enter student average marks:");
    scanf("%f",&s2.avg);

    printf("\n\nRollno  Name   Average");
    printf("\n-------------------------------");
    printf("\n%d - %s - %f",s1.rollno,s1.name,s1.avg);
    printf("\n%d - %s - %f",s2.rollno,s2.name,s2.avg);


  printf("\n");
}
