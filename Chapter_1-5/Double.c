#include <stdio.h>

int main()
{
    int a = 50.45, b = 60, sum;
    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    int n;
    double x;

    x = 10.5;
    n = (int)x;
    printf("Value of n is %d\n", n);
    printf("Value of x is %lf\n", x);

    return 0;
}