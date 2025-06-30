# include <stdio.h>
int main()
{
    int no,d,f,count;
    no=f=count=0;
    d=1;

    printf("Enter a no:");
    scanf("%d",&no);

    //prime no checking logic

    while(d<=no)
    {
        count++;
        if(no%d==0)
        {
            f++;
        }
        d++;
    }

    if(f<=2)
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
