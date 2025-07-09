# include <stdio.h>
int main()
{
    char str[100];
    int i,wc=1;

    printf("Enter a string:");
    gets(str);


    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            wc++;
    }
    printf("No of words are:%d",wc);



    	return 0;
}
