# include <stdio.h>
int main()
{
    char str[50];
    int i;

    printf("Enter a string:");
    gets(str);

    if(str[0]>=65 && str[0]<=90)
            putchar(str[0]);
    else
           if(str[0]>=97 && str[0]<=122 )
               putchar(str[0]-32);


    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            putchar(str[i]);
            i++; //moves next char of the space
            if(str[i]>=65 && str[i]<=90)
                putchar(str[i]);
            else
               if(str[i]>=97 && str[i]<=122)
                    putchar(str[i]-32);
        }
        else
              if(str[i]>=65 && str[i]<=90)
                  putchar(str[i]+32);
              else
                    if(str[i]>=97&& str[i]<=122)
                        putchar(str[i]);
     }

    	return 0;
}
