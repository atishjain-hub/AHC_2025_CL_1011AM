# include <stdio.h>
int main()
{
    char str[100];
    int i;

    printf("Enter a string:");
    gets(str);

//logic 1
    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]==' ')
          break;
      else
        printf("%c",str[i]);
    }

printf("\n");
        //logic2
   for(i=0;str[i]!=' ';i++)
    {
        printf("%c",str[i]);
    }


    	return 0;
}
