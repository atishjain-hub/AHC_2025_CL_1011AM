# include <stdio.h>
int main()
{
    int tar,n,sum,c;
    double avg;
    tar=n=sum=avg=c=0;

    printf("Enter How many Numbers:");
    scanf("%d",&tar);

   for(c=1;c<=tar;c++)
   {
      printf("Enter %d no:",c);
      scanf("%d",&n);
      sum=sum+n;
   }

   printf("\nSum of %d numbers is %d",tar,sum);

   avg=(float)sum/tar;

   printf("\nAverage is:%.15lf",avg);


	return 0;
}
