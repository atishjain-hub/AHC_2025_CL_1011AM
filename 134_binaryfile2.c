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

    fp=fopen("emp.dat","ab+");


    while( (fread(&e,sizeof(e),1,fp))==1 )
          {
              printf("\n%d - %s - %f",e.empid,e.name,e.salary);
          }



  printf("\n");
}

