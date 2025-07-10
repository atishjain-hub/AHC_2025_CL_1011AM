# include <stdio.h>
int main()
{
    int add(int,int);  //func declaration

    int a,b,c;
    a=b=c=0;

    //input
    printf("Enter 2 nos:");
    scanf("%d%d",&a,&b);

    //process or business logic
    c=add(a,b); //func call


    //output
    printf("\nResult is:%d",c);

    return 0;
}

int add(int x,int y)
{
    int z=0; //local variable
    z=x+y;
    return(z);
}



