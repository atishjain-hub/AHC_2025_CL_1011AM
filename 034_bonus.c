# include <stdio.h>
int main()
{
    char ms,gen;
    int age=0;

    printf("Enter Marital Status[M]arried/[U]nmarried):");
    scanf("%c",&ms);

    if(ms=='M' || ms=='m')
    {
        printf("Eligible for Bonus....");
    }
    else
           if(ms=='U' || ms=='u')
            {
               printf("Enter ur Gender(M/F):");
               fflush(stdin);
               scanf("%c",&gen);
               printf("Enter ur age:");
               scanf("%d",&age);

               if(gen=='M' || gen=='m')
                    if(age>=30)
                          printf("Eligible for Bonus....");
                   else
                         printf("Not Eligible for Bonus...");
              else
                     if(gen=='F' || gen=='f')
                          if(age>=25)
                              printf("Eligible for Bonus...");
                         else
                            printf("Not Eligible for Bonus...");
                    else
                            printf("\aInvalid Gender....");
            }
            else
                  printf("\aInvalid marital status....");

  return 0;
}
