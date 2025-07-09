# include <stdio.h>
int main()
{

    char names[5][20];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter %d no:",i+1);
        gets(names[i]);
    }

    for(i=0;i<5;i++)
       printf("\n%d - %s",i,names[i]);


    	return 0;
}
