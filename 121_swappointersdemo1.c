#include <stdio.h>
main()
{
    void swap(int*,int*);
    int a,b;
    a=10;
    b=20;
    printf("vlaues of A and B Before calling swap() function:");
    printf("\nA = %d",a);
    printf("\nB = %d",b);

    //swap(a,b); //call by value

      swap(&a,&b); //call by ref

    printf("\nvlaues of A and B After calling swap() function:");
    printf("\nA = %d",a);
    printf("\nB = %d",b);

 printf("\n");
}
//func definition
void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
