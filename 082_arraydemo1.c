# include <stdio.h>
int main()
{
    int i,x[10]={};
    printf("\nsize of the array is %d bytes",sizeof(x));

    for(i=0;i<10;i++)
    {
       printf("\n%d - %d",i,x[i]);
    }

	return 0;
}
