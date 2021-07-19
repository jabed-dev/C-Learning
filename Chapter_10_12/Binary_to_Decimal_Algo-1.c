#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char binary[65];
    int len, decimal, power, i;

    printf("Enter the binary number: ");
    scanf("%s", binary);
    len = strlen(binary);
    power = len - 1;
    decimal = 0;

    for (i = 0; i < len; i++)
    {
        decimal += (binary[i] - 48) * pow(2, power);
        power--;
    }
    printf("Decimal value is %d\n", decimal);

    return 0;
}

/* 
 100111 = 39
 2^5*1  2^4*0  2^3*0  2^2*1  2^1*1  2^0*1
 32     0      0      4      2      1
 = 39
*/
