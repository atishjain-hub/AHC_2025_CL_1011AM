//Program to Calculate Bill Amount

# include <stdio.h>
int main()
{
    int p1,p2,billamt; //declaration
    p1=p2=billamt=0; //initialization

    printf("Enter Price of Dairy Milk....:");
    scanf("%d",&p1);

    printf("Enter Price of Kit kat.......:");
    scanf("%d",&p2);

    billamt=p1+p2;

    printf("Total Bill Amount is.........:%d",billamt);

  return 0;
}
