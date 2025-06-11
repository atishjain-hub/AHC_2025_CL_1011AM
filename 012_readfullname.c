# include <stdio.h>
int main()
{
    char name[100];

    printf("Enter ur name:");
    scanf("%[^\n]",&name);

    printf("Heyy %s Good Day!",name);

  return 0;
}
