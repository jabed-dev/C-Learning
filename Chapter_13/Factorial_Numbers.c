#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 100)
    {
        printf("Your number is greater than 100");
    }

    int obj[num], i;
    for (i = 0; i < num; i++)
    {
        obj[i] = 0;
    }
    int x, d2 = 2, d3 = 3;

    for (i = 2; i <= num; i++)
    {
        x = i;
        while (1)
        {
            if (x % d2 == 0)
            {
                x = x / d2;
                if (obj[d2])
                {
                    obj[d2]++;
                }
                else
                {
                    obj[d2] = 1;
                }
                if (x <= 1)
                {
                    break;
                }
            }
            else
            {
                if (x % d3 == 0)
                {
                    x = x / d3;
                    if (obj[d3])
                    {
                        obj[d3]++;
                    }
                    else
                    {
                        obj[d3] = 1;
                    }
                }
                if (x <= 1)
                {
                    d3 = 3;
                    break;
                }

                if (x <= d3)
                {
                    d3 = 3;
                }
                else
                {
                    d3 += 2;
                }
            }
        }
    }

    for (i = 0; i < num; i++)
    {
        if (obj[i] != 0)
        {
            printf("%d: %d\n", i, obj[i]);
        }
    }

    return 0;
}


/* Output
n = 8
pac = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8
    = 2 * 3 * (2 * 2) * 5 * (2 * 3) * 7 * (2 * 2 * 2)
facNum = { '2': 7, '3': 2, '5': 1, '7': 1 }
*/