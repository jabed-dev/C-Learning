#include <stdio.h>
int main()
{
    int table[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3}};
    int reverse_table[5][5];

    int r, c;
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {
            reverse_table[c][r] = table[r][c];
        }
    }

    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("%d\t", reverse_table[r][c]);
        }
        printf("\n");
    }

    return 0;
}
