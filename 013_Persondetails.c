# include <stdio.h>
int main()
{
   char name[20],gender;
   int age=0;

   printf("Enter ur Name:");
   scanf("%s",&name);

   printf("Enter ur Gender(M/F):");
   fflush(stdin); //clears the keyboard buffer
   scanf("%c",&gender);

   printf("Enter ur Age:");
   scanf("%d",&age);

   printf("\nName is:%s",name);
   printf("\nGender is:%c",gender);
   printf("\nAge is:%d",age);


  return 0;
}
