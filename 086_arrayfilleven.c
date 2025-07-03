# include <stdio.h>
int main()
{
    int arr[100],size,i,e=2;

    printf("Enter how many elements you want to store(1-100):");
    scanf("%d",&size);

    if( !(size>=1 && size<=100))
    {
        printf("\n\ainvalid array size...");
        exit(0);
    }


  for(i=0;i<size;i++)
  {
   arr[i]=e;
   e+=2;  //e=e+2
  }

  for(i=0;i<size;i++)
  {
      printf("\n%d - %d",i,arr[i]);
  }






	return 0;
}
