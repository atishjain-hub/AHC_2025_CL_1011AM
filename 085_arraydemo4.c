# include <stdio.h>
int main()
{
    int i,arr[10];

   for(i=0;i<10;i++)
   {
     printf("Enter %d no:",i+1);
     scanf("%d",&arr[i]);
   }

   printf("\nArray Elements are :");
   for(i=0;i<10;i++)
      printf("\n%d - %d",i,arr[i]);

	return 0;
}
