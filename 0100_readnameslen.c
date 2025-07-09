# include <stdio.h>
int main()
{

    int size;
    int i;

    printf("Enter How Many Names you want to read:");
    scanf("%d",&size);

    char names[size][20];

    for(i=0;i<size;i++)
    {
        printf("Enter %d name:",i+1);
        fflush(stdin);
        gets(names[i]);
    }

    for(i=0;i<size;i++)
       printf("\n%d - %s - %d",i+1,names[i],strlen(names[i]));


    	return 0;
}
