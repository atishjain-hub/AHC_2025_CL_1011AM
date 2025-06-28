# include <stdio.h>
int main()
{
    int no,ec,esum,oc,osum;
    no=ec=esum=oc=osum=0;

    do
    {
     printf("Enter a no:");
     scanf("%d",&no); //5
     if(no!=0 && no%2==0)
     {
         ec++;  //3
         esum=esum+no; //30
     }
     else
        if(no!=0)
         {
           oc++; //1
           osum=osum+no; //5
         }
    }while(no!=0);

    printf("\nEven numbers are %d and sum is %d",ec,esum);
    printf("\nOdd numbers are %d and sum is %d",oc,osum);

	return 0;
}
