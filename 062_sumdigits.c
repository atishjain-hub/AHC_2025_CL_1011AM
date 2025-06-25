# include <stdio.h>
int main()
{
    int no,sum,r;
    no=sum=r=0;

    printf("Enter a no:");
    scanf("%d",&no);

    while(no>0)
    {
        r=no%10;
        sum=sum+r;
        no=no/10;
    }

    printf("Sum of Digits are:%d",sum);

	return 0;
}
