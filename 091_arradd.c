# include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;

    printf("Enter Elements for First Array");
    printf("\n----------------------------------\n");

    for(i=0;i<3;i++) //outer for loop - rows
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a no for(%d,%d) index:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

      printf("Enter Elements for Second Array");
    printf("\n----------------------------------------\n");

    for(i=0;i<3;i++) //outer for loop - rows
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a no for(%d,%d) index:",i,j);
            scanf("%d",&b[i][j]);
        }
    }


    //logic for adding the arrays

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    system("cls");

    //output
    printf("First Array");
    printf("\n-----------\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\t\t+");

    printf("\nSecond Array");
    printf("\n-----------\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

    printf("\n\t\t=");

    printf("\nResult Array");
    printf("\n-----------\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    	return 0;
}
