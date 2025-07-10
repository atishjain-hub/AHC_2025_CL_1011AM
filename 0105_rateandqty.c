# include <stdio.h>
int main()
{
    float calculate(float,int);  //func decl

    int qty;
    float rate,amt;
    qty=rate=amt=0;

    printf("Enter Rate:");
    scanf("%f",&rate);

    printf("Enter Quantity:");
    scanf("%d",&qty);

    amt=calculate(rate,qty); //func call or func invocation or func exection

    printf("Amount is:%f",amt);

   return 0;
}
//func definition

float calculate(float r,int q)
{
    return (r * q);
}




