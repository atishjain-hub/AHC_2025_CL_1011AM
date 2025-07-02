# include <stdio.h>
int main()
{
    int i,x[]={12,23,12,23,45,56,7,89,900};
    printf("\nsize of the array is %d bytes",sizeof(x));

    int noe=sizeof(x)/sizeof(int);
    printf("\nNo of Elements in the array:%d",noe);

    for(i=0;i<noe;i++)
    {
       printf("\n%d - %d",i,x[i]);
    }

	return 0;
}
