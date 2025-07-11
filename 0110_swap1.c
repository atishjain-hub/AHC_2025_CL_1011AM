# include <stdio.h>
int main()
{
    void swap(int,int); //func decl

    int a,b;
    printf("Enter vlaue for a:");
    scanf("%d",&a);

    printf("Enter vlaue for b:");
    scanf("%d",&b);

    swap(a,b);
    printf("\nA is:%d",a);
    printf("\nB is:%d",b);

   return 0;
}

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
