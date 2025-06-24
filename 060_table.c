# include <stdio.h>
int main()
{
    int tno,c,res;
    tno=res=0;

    printf("Enter Table no to Print....:");
    scanf("%d",&tno);

    for(c=1;c<=12;c++)
    {
        res=tno*c;
        printf("\n%d * %d = %d",tno,c,res);
    }






	return 0;
}
