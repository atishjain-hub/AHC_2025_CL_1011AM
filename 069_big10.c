# include <stdio.h>
int main()
{
    int no,count,big;
    no=big=0;
    count=1;

    while(count<=10)
    {
        printf("Enter %d no:",count);
        scanf("%d",&no);

        if(no>big)
        {
            big=no;
        }
        count++;
    }

    printf("Biggest no is:%d",big);


	return 0;
}
