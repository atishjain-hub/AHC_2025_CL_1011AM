# include <stdio.h>
int main()
{
    float avg=0;

    printf("Enter Average Marks:");
    scanf("%f",&avg);

    if(avg>=40)
       {
        printf("Ur Passed....");
        printf("\nCongrats....");
       }
    else
    {
        printf("Ur Failed....");
        printf("\nBetter Luck Next Time....");
    }

    printf("\nThank You!");

  return 0;
}
