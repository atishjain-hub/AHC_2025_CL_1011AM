#include <stdio.h>
main()
{
   int a,b,c,*p1,*p2;

   printf("Enter 2 nos:");
   scanf("%d%d",&a,&b);

   p1=&a;
   p2=&b;

   c=*p1+*p2;
   printf("\nResult is:%d",c);

 printf("\n");
}
