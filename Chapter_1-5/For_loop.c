#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");

    int m = 0, n = 5;

    for (int i = 1; i <= 10; i++)
    {
        m += n;
        printf("%d x %d = %d\n", n, i, m);
    }

    return 0;
}