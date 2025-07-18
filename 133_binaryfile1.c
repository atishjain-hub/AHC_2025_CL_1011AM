# include <stdio.h>
void main()
{
    struct employee
    {
        int empid;
        char name[50];
        float salary;
    };

    typedef struct employee emp;
    emp e;
    FILE *fp;
    char ch='y';

    fp=fopen("emp.dat","ab+");

while(ch=='y')
{
    //reading data from keyboard
    printf("\nEnter Employee id:");
    scanf("%d",&e.empid);

    printf("Enter Employee Name:");
    fflush(stdin);
    gets(e.name);

    printf("Enter Employee Salary:");
    scanf("%f",&e.salary);

    fwrite(&e,sizeof(e),1,fp);

    printf("\nDo you wish to add one more record(y/n):");
    fflush(stdin);
    ch=getche();
}


  printf("\n");
}

