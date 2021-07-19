#include <stdio.h>

double pi = 3.14;

void my_fnc()
{
    pi = 3.1416;
    double pi = 3.00;
}

int main()
{
    printf("%.4lf\n", pi);
    my_fnc();
    printf("%.4lf\n", pi);

    return 0;
}
