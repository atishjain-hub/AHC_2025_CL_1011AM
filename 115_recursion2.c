#include <stdio.h>

int factorial(int n) {
    if (n == 0)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main()
{
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
