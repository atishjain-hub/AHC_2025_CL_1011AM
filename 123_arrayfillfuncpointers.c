# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define SIZE 10
int i;
void main()
{
    void display(int*); //func decl
    int arr[SIZE],x;

    for(i=0;i<SIZE;)
    {
        x=rand()%1000;
        if(x>99)
        {
            arr[i]=x;
            i++;
        }
    }

     display(arr); //func call
    printf("\n");
}

void display(int *x)
{
    for(i=0;i<SIZE;i++)
    {
        printf("\n%u - %d",x,*x);
        x++;
    }

}
