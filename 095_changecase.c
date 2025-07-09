# include <stdio.h>
int main()
{
    char str[50];
    int i;

    printf("Enter a string:");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {

        if(str[i]>=65 && str[i]<=90)
            putchar(str[i]+32);
        else
               if(str[i]>=97 && str[i]<=122)
                  putchar(str[i]-32);
              else
                  putchar(str[i]);
     }

    	return 0;
}
