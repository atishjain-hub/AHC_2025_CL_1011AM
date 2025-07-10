# include <stdio.h>
int main()
{
    int total(int,int,int);
    float avg(int);

    int c,j,p,t;
    float a;
    c=j=p=t=a=0;

    printf("Enter marks for C, Java & Python:");
    scanf("%d%d%d",&c,&j,&p);

    t=total(c,j,p);

    printf("\nTotal is:%d",t);

    a=avg(t);

    printf("\nAverage is:%f",a);
   return 0;
}

int total(int x,int y,int z)
{
    int total=0;
    total=x+y+z;
    return total;
}

float avg(int t)
{
    return (float)t/3;
}
