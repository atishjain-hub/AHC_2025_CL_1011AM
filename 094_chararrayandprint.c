# include <stdio.h>
int main()
{
    char str[50];
    int uc,lc,dc,sc,i;
    uc=lc=dc=sc=0;

    printf("Enter a string:");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
             uc++;
        else
                if(str[i]>=97&& str[i]<=122)
                    lc++;
                else
                        if(str[i]>=48 && str[i]<=57)
                            dc++;
                         else
                               sc++;
        }
        printf("\nUpper case Count:%d",uc);
        printf("\nLower case Count:%d",lc);
        printf("\nDigits Count:%d",dc);
        printf("\nSpecial Symbols count:%d",sc);

    	return 0;
}
