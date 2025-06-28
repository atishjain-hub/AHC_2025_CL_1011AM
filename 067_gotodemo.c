# include <stdio.h>
int main()
{
    int no=1;

    hi:
        printf("\t%d",no++);

    if(no<=100)
        goto hi;

	return 0;
}
