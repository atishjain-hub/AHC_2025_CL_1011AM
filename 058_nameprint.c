# include <stdio.h>
# include <string.h>
int main()
{
 char name[20];
 int i,len=0;

 printf("Enter ur Name:");
 scanf("%s",&name);

 len=strlen(name);

 printf("Length of the name is:%d",len);

 for(i=1;i<=len;i++)
 {
     printf("\n%d.%s",i,name);
  }




	return 0;
}
