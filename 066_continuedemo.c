# include <stdio.h>
int main()
{
    int no;

    for(no=1;no<=100;no++)
    {
         if(no%10==0)
        {
           continue;
        }
        printf("\t%d",no);
    }


	return 0;
}
