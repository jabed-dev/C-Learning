#include <stdio.h>

int main()
{
    int a, b, i, t, gcd, a2, b2;

    printf("Enter a fast number: ");
    scanf("%d", &a);
    printf("Enter a second number: ");
    scanf("%d", &b);

    a2 = a, b2 = b;
    // Algorithm 1
    if (a < b)
    {
        i = a;
    }
    else
    {
        i = b;
    }

    while (i >= 1)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
        i--;
    }

    printf("Algo-1 GCD = %d\n", gcd);

    // Algorithm 2
    if (a == 0)
    {
        gcd = a;
    }
    else if (b == 0)
    {
        gcd = b;
    }
    else
    {
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    printf("Algo-2 GCD = %d\n", gcd);
    printf("LCM = %d\n", (a2 * b2) / gcd);

    return 0;
}
