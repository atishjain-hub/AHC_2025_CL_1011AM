# include <stdio.h>
int main()
{
    display(1); //func call

     return 0;
}

display(int x)
{
    if(x>100) //base condition
        return;
    else
    {
        printf("\t%d",x);
        display(++x);   //recursive call
    }

}

