# include <stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;

    printf("Enter 3 nos:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
           printf("%d is the Biggest no",a);
    else
           if(b>c)
              printf("%d is the Biggest no",b);
           else
              printf("%d is the Biggest no",c);

  return 0;
}
