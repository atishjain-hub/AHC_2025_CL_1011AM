# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int arr[10],i,j,temp,count=0;

    srand(time(0));
    for(i=0;i<10;i++)
    {
        arr[i]=rand()%100;
    }

    printf("Unsorted Elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d-->",arr[i]);
    }
    printf("\b\b\b   ");


    //logic to sort the data

for(i=0;i<10;i++)
{
 for(j=i+1;j<10;j++)
 {
     count++;
    if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    } //end of if
  } //end of inner for
} //end of outer for


    printf("\n\n\nsorted Elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d-->",arr[i]);
    }
    printf("\b\b\b   ");

    printf("\n\nNo of iterations are:%d\n\n",count);
	return 0;
}
