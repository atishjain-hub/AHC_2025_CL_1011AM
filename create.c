# include <stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char ch;

    if(argc<2)
    {
        puts("\aFile name is missing....");
        exit(0);
    }

    if(argc>2)
    {
        puts("\aToo Many File Names....");
        exit(0);
    }

    fp=fopen(argv[1],"rt");

    if(fp!=NULL)
    {
        puts("\aFile is already existing...");
        exit(0);
    }

    fp=fopen(argv[1],"wt");

    while ( (ch=getchar())!=EOF )
    {
        putc(ch,fp);
    }

    puts("1 File is Created...");

return 0;
}

