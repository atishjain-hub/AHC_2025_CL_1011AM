# include <stdio.h>
int main()
{
    void change(int);
    int no=100;

    printf("\nvalue of no before change() function:%d",no);
    change(no);
    printf("\nvalue of no after change() function:%d",no);

   return 0;
}
void change(int no)
{
    no=999;
}

