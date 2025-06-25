# include <stdio.h>
int main()
{
    int no,count;
    no=count=0;

    printf("Enter a no:");
    scanf("%d",&no);

    while(no!=0)
    {
        no=no/10;
        count++;
    }

     printf("No of Digits are:%d",count);

	return 0;
}
