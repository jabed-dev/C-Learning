#include <stdio.h>

int main()
{
    double area, r, pi = 3.1416;

    printf("Circle Radius: ");
    scanf("%lf", &r);
    area = pi * (r * r);
    printf("Circle Area = %.2lf\n", area);

    return 0;
}
