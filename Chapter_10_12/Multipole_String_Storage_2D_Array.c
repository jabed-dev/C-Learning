#include <stdio.h>

int main()
{
    char countrys[7][50] = {"Bangladesh", "India", "Pakistan", "China", "Japan", "United States", "United Kingdom"};

    for (int row = 0; row < 7; row++)
    {
        printf("%s\n", countrys[row]);
    }

    return 0;
}