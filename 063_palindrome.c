# include <stdio.h>
int main()
{
    int no,r,rev,temp;
    no=r=rev=temp=0;

    printf("Enter a no:");
    scanf("%d",&no);

    temp=no;

    while(no!=0)
    {
        r=no%10;
        rev=rev*10+r;

        no=no/10;
    }
    no=temp;

    printf("Reversed no is:%d\n",rev);

    if(no==rev)
        printf("Palindrome...");
  else
     printf("Not a Palindrome...");


	return 0;
}
