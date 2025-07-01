# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
int c;
srand(time(0));
for(c=1;c<=10;c++)
{
    printf("\n%d - %d",c,rand()%10000);
}



	return 0;
}
