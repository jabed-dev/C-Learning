#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = celsius * (double)9 / 5 + 32;
    printf("Temperature in farenheit is: %.2lf\n", farenheit);

    return 0;
}