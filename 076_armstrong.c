# include <stdio.h>
int main()
{
    int no,r,sum,temp;
    no=r=sum=temp=0;

    printf("Enter a no:");
    scanf("%d",&no);
    temp=no;

    while(no!=0)
    {
        r=no%10;
        sum=sum+(r*r*r);
        no=no/10;
     }

    no=temp;

    if(sum==no)
        printf("ArmStrong...");
    else
       printf("Not ArmStrong");

	return 0;
}
