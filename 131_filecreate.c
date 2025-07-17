# include <stdio.h>
void main()
{
    char fname[15],ch;
    FILE *fp;

    printf("Enter file name(f6-save):");
    scanf("%s",&fname);

    fp=fopen(fname,"rt");
    if(fp!=NULL)
    {
        printf("\aFile is already existing...");
        exit(0);
    }

    fp=fopen(fname,"wt");
    printf("\nFile is ready,Enter ur Data....:\n");

  while(1)
  {
    ch=getchar();
    if(ch==EOF)
        break;
    putc(ch,fp);
  }

  printf("File is Saved Successfully...");

  printf("\n");
}

