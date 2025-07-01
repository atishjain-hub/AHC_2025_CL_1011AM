# include <stdio.h>
int main()
{
    int r,c,tar;

    printf("Enter no of rows:");
    scanf("%d",&tar);

 for(r=1;r<=tar;r++)
 {
    for(c=1;c<=r;c++)
    {
        printf(" %d",c);
    }
    printf("\n");

 }


	return 0;
}
