# include <stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=3;i++) //outer loop
    {
        for(j=1;j<=3;j++) //inner
        {
            printf("\n%d - %d",i,j);
        }

        printf("\n--------------------");

    }

	return 0;
}
