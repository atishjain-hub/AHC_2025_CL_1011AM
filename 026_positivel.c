# include <stdio.h>
int main()
{
  int no=0;

  printf("Heyy Enter one Number Please....:");
  scanf("%d",&no);

  if(no>0)
    printf("%d is Positive...",no);
  else
         if(no<0)
            printf("%d is Negative...",no);
         else
                printf("%d is Neutral....",no);

  return 0;
}
