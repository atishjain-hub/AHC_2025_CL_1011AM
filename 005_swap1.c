
# include <stdio.h>
int main()
{
    int a,b,temp;
    a=b=temp=0;

    //read the input
    printf("Enter value for A:");
    scanf("%d",&a);

    printf("Enter value for B:");
    scanf("%d",&b);

    //logic to swap the values
    temp=a;
    a=b;
    b=temp;

    //output
    printf("A is: %d",a);
    printf("\nB is: %d",b);

  return 0;
}
