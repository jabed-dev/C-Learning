#include <stdio.h>
#include <string.h>

int main()
{
    char binary[65];
    int len, decimal, i;

    printf("Enter the binary number: ");
    scanf("%s", binary);

    len = strlen(binary);
    decimal = 0;
    double power = 0.5;
    for (i = len - 1; 0 <= i; i--)
    {
        power *= 2;
        if (binary[i] == '1')
        {
            decimal += power;
        }
    }

    printf("Decimal value is %d\n", decimal);

    return 0;
}

/*
 1   1   1   0   0   1
 32  16  8   4   2   1
 32 +16 +8 + 0 + 0 + 1 
 = 57
*/