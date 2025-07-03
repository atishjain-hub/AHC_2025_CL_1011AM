# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int arr[10],i,key=0;
    int x=0;

    srand(time(0));
    for(i=0;i<10;i++)
    {
        arr[i]=rand()%10000;
    }

    printf("Array Elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d-->",arr[i]);
    }
    printf("\b\b\b   ");

    printf("\nEnter key value to search:");
    scanf("%d",&key);


    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            x=1;
            break;
        }
    }

    if(x==1)
        printf("\n%d is found at %d index",key,i);
    else
        printf("\n%d is not found",key);




	return 0;
}
