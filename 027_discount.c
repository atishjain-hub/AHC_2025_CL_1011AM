# include <stdio.h>
int main()
{
    int sales,dis,final_amt;
    sales=dis=final_amt=0;

    printf("Enter Sales Amount...:");
    scanf("%d",&sales);

    if(sales>=25000)
        dis=sales*10/100;
    else
        dis=sales*5/100;

    final_amt = sales - dis;

    printf("\n----------------------------------------");
    printf("\nArihant Trading co.");
    printf("\n----------------------------------------");
    printf("\nDiscount is:%d",dis);
    printf("\nFinal Amount is:%d",final_amt);
    printf("\n----------------------------------------");

  return 0;
}
