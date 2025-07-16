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


    struct student s[100];
    int i,size;
    printf("no of bytes occupied by s is %d",sizeof(s));

    printf("\nEnter how many students(1-100):");
    scanf("%d",&size);

    if(!(size>=1 && size<=100))
    {
        printf("\n\aInvalid size...");
        exit(0);
    }

  for(i=0;i<size;i++)
  {
    printf("Enter student rollno:");
    scanf("%d",&s[i].rollno);

    printf("Enter student name:");
    scanf("%s",&s[i].name);

    printf("Enter student average marks:");
    scanf("%f",&s[i].avg);
  }
    printf("\n\nRollno  Name   Average");
    printf("\n-------------------------------");
for(i=0;i<size;i++)
    printf("\n%d - %s - %f",s[i].rollno,s[i].name,s[i].avg);



  printf("\n");
}
