# include <stdio.h>
int main()
{
    int no=1;

    while(-100)
    {
        printf("\t%d",no);
        no++;

        if(no>100)
            break;
    }


	return 0;
}
