# include <stdio.h>
int main()
{
    int totavg(int,int,int);
    int c,j,p,t;
    float a;
    c=j=p=t=a=0;

    printf("Enter marks for C, Java & Python:");
    scanf("%d%d%d",&c,&j,&p);

    t=totavg(c,j,p);
    printf("\nTotal is:%d",t);
    a=(float)t/3;

    printf("Average is:%f",a);
   return 0;
}

int totavg(int x,int y,int z)
{
    int total=0;
    total=x+y+z;
    return total;
}
