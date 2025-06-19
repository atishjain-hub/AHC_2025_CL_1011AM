# include <stdio.h>
int main()
{
    int no=0;

    printf("Enter a number between 1 & 5:");
    scanf("%d",&no);

    switch(no)
    {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case  3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        default: printf("\aInvalid no....");
    }

  return 0;
}
