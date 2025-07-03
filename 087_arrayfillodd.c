# include <stdio.h>
int main()
{
    int size,i,o=1;

    printf("Enter how many elements you want to store:");
    scanf("%d",&size);

    if(size<=0)
    {
        printf("\n\ainvalid array size...");
        exit(0);
    }

    int arr[size];

  for(i=0;i<size;i++)
  {
   arr[i]=o;
   o+=2;
  }

  for(i=0;i<size;i++)
  {
      printf("\n%d - %d",i,arr[i]);
  }






	return 0;
}
