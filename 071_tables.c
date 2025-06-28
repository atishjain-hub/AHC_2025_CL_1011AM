# include <stdio.h>
# include <stdlib.h>
int main()
{
    int tno,c,res;


    for(tno=2;tno<=10;tno++)
    {
        printf("\nTable no = %d",tno);
        printf("\n-------------------\n");
        for(c=1;c<=12;c++)
        {
            res=tno*c;
            printf("\n%d * %d = %d",tno,c,res);
        }
      printf("\n-------------------\n");
      printf("\nPress Any Key to Continue with the Next Table....");
      getch();
      system("cls");
    }

	return 0;
}
