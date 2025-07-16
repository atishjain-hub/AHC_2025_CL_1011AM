#include <stdio.h>
main()
{
    int x=10,*y;
    y=&x;

    printf("\nvalue of x is:%d",x);
    printf("\nAddress of x is:%u",&x);
    printf("\nvalue of y is:%u",y);
    printf("\nvlaue at the address of y:%d",*y);

 printf("\n");
}
