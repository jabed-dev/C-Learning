#include <stdio.h>

int main()
{
    int num;
    printf("Enter the decimal number: ");
    scanf("%d", &num);
    int binary[65];

    int i = 0;
    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (--i; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

/*
2 | 57 | 1
    56
----------
2 | 28 | 0
    28
---------
2 | 14 | 0
    14
---------
2 | 7 | 1
    6
---------
2 | 3 | 1
    2
---------
2 | 1 | 1
    0
---------
    X
= 111001
*/

