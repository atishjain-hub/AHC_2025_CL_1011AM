# include <stdio.h>
void main()
{
    union sample
    {
        int no; //4
        float x; //4
        double y; //8
    };

    union sample s;

    printf("%d",sizeof(s));

  printf("\n");
}

