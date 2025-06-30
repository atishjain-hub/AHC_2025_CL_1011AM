# include <stdio.h>
# include <math.h>
int main()
{
    int no,d,count;
    no=count=0;
    d=2;
    char isprime='y';

    printf("Enter a no:");
    scanf("%d",&no);

    //prime no checking logic

    while(d<=sqrt(no))
    {
        count++;
        if(no%d==0)
        {
            isprime='n';
            break;
        }
        d++;
    }

    if(isprime=='y')
    {
        printf("%d is Prime...",no);
        printf("\nNo of Iterations are:%d",count);
    }
    else
    {
        printf("%d is Not Prime...",no);
        printf("\nNo of Iterations are:%d",count);
    }

	return 0;
}
