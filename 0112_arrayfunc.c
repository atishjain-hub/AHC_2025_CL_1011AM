# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define SIZE 5

int i; //global declaration

void display(int x[])
{
    for (i=0;i<SIZE;i++)
    {
        printf("\n%d - %d",i,x[i]);
    }
}

int main()
{
    void display(int[]);
    int arr[SIZE];

    srand(time(0));
    for(i=0;i<SIZE;i++)
    {
        arr[i]=rand()%100;
    }

    display(arr);

     return 0;
}


