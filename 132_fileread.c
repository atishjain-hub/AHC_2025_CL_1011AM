# include <stdio.h>
void main()
{
    char fname[15],ch;
    FILE *fp;

    printf("Enter file name:");
    scanf("%s",&fname);

    fp=fopen(fname,"rt");
    if(fp==NULL)
    {
        printf("\aFile not existing...");
        exit(0);
    }

  while(1)
  {
    ch=getc(fp);
    if(ch==EOF)
        break;

    putchar(ch);
  }

  printf("\n");
}

