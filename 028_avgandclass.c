# include <stdio.h>
int main()
{
    float avg=0;
    printf("Enter ur Average Marks:");
    scanf("%f",&avg);

    if(avg>=60)
        printf("First class...");
    else
           if(avg>=50)
               printf("Second class...");
           else
                  if(avg>=40)
                     printf("Third class....");
                  else
                         printf("Failed....");

  return 0;
}
