# include <stdio.h>
int main()
{
    int c,java,python;
    float total,avg;

    c=java=python=total=avg=0;

    printf("Enter Marks of C Language:");
    scanf("%d",&c);

    printf("Enter Marks of Java Language:");
    scanf("%d",&java);

    printf("Enter Marks of Python Language:");
    scanf("%d",&python);

    total=c+java+python;
    avg=total/3;

    printf("\nTotal is:%.0f",total);
    printf("\nAverage is:%.2f %%",avg);

    getch(); //waits for a key
  return 0;
}
