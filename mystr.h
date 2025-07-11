// function declarations
int i;
int newstrlen(char[]);
int wcount(char[]);

//function definitions
int newstrlen(char x[])
{
    int len=0;
    for(i=0;x[i]!='\0';i++)
    {
       if(x[i]!=' ')
          len++;
    }
    return len;
}

//-----------------------
int wcount(char str[])
{
    int w=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            w++;
    }
    return w;
}

