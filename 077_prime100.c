# include <stdio.h>
int main()
{
    int no,d;

    for(no=3;no<=100;no++) //outer loop
    {
        d=2;
        char flag='y';
        while(d<=(no/2)) //inner loop
        {
            if(no%d==0)
            {
                flag='n';
                break;
            }
            d++;
        }//end of while

        if(flag=='y')
            printf("\t%d",no);

    }


	return 0;
}
