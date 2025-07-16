# include <stdio.h>
void main()
{
    void display(char*); //func decl
    char str[100];

    printf("Enter a string:");
    gets(str);

    display(&str[0]); //func call
    printf("\n");
}


void display(char *x)
{
    while(*x!='\0')
    {
        printf("\n%u - %c",x,*x);
        x++;
    }

}

