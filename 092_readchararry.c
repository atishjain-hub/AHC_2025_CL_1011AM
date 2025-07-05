# include <stdio.h>
# include <string.h>
# include <windows.h>

int main()
{
    char n[50]; //char array declaration
    int len=0,i;

    printf("Enter ur name:");
    scanf("%s",&n);

    len=strlen(n);

    for(i=0;i<len;i++)
    {
        printf("%c\n",n[i]);
        Sleep(1000);
    }


    	return 0;
}
