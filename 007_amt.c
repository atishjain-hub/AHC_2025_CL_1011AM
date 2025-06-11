# include <stdio.h>
int main()
{
    int qty;
    float rate,amt;

    printf("Enter Quantity:");
    scanf("%d",&qty);

    printf("Enter Rate:");
    scanf("%f",&rate);

    amt=rate*qty;

    printf("Amount to be paid is :%.2f",amt);

  return 0;
}
