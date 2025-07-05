# include <stdio.h>
# include <windows.h>

int main()
{
    char n[50]; //char array declaration
    int i;

    printf("Enter ur name:");
    scanf("%s",&n);

     for(i=0;n[i]!='\0';i++)
    {
        printf("%c\n",n[i]);
        Sleep(1000);
    }


    	return 0;
}
