# include <stdio.h>
int main()
{
    float totavg(int,int,int);
    int c,j,p,t;
    float a;
    c=j=p=t=a=0;

    printf("Enter marks for C, Java & Python:");
    scanf("%d%d%d",&c,&j,&p);

    a=totavg(c,j,p);
    printf("Average is:%f",a);
   return 0;
}

float totavg(int x,int y,int z)
{
    int total=0;
    total=x+y+z;
    printf("\nTotal is:%d",total);

    return ((float)total/3);
}
