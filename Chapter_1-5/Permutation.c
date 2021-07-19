#include <stdio.h>

int main()
{
    int a, b, c, n = 3;

    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= n; b++)
        {
            if (a == b)
                continue;
            for (c = 1; c <= n; c++)
            {
                if (a != c && b != c)
                {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}