# include <stdio.h>
int main()
{
    const float PI=3.14;
    float r,a;

    printf("Enter radius:");
    scanf("%f",&r);

    a=PI*r*r;

    printf("Are of Circle is:%f",a);

  return 0;
}
