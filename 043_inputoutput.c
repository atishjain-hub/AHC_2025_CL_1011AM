# include <stdio.h>
int main()
{
   char ch;
   printf("Enter a character....:");
   ch=getchar();
   printf("The character is:%c",ch);

   printf("\n\nEnter a character....:");
   ch=getche();
   printf("\nThe character is:%c",ch);

   printf("\n\nEnter a character....:");
   ch=getch();
   printf("\nThe character is:%c",ch);



  return 0;
}
