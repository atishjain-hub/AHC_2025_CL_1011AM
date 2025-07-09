# include <stdio.h>
# include <string.h>
int main()
{
    char str[]="python";
    char newstr[10];

    printf("upper case:%s",strupr(str));
    printf("\nlower case:%s",strlwr(str));
    printf("\nlength :%d",strlen(str));
    printf("\nreverse :%s",strrev(str));
    printf("\nreverse :%s",strrev(str));
    strcpy(newstr,str);
    printf("\ncopied string is:%s",newstr);

    printf("compare:%d",strcmp("ABHI","ABHI"));


    return 0;
}
