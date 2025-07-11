# include <stdio.h>
int main()
{
    int big2(int,int); //func declaration

    int a,b;

    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);

    printf("Biggest no is:%d",big2(a,b));  //func call

   return 0;
}

int big2(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
