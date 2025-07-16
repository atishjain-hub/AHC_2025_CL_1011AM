# include <stdio.h>
# include "mystr.h"

int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    printf("No of Characters are:%d",newstrlen(str));

    printf("\nNo of words are:%d",wcount(str));

     return 0;
}

