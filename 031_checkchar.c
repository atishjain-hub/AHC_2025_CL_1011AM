# include <stdio.h>
int main()
{
  char ch;
  printf("Enter a character...:");
  scanf("%c",&ch);

  if(ch>=65 && ch<=90)
     printf("%c is Capital Letter...",ch);
  else
        if(ch>=97 && ch<=122)
           printf("%c is Small Letter....",ch);
        else
               if(ch>=48 && ch<=57)
                  printf("%c is a Digit...",ch);
               else
                     printf("%c is a Special character...",ch);

  return 0;
}
