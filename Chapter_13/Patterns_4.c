#include <stdio.h>

int main()
{
    int num = 6;
    int i, j, k;
    char star = '*';

    for (i = 1; i <= num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c ", star);
        }
        for (k = 1; k < (num * 2) - (j * 2); k++)
        {
            printf("  ");
        }
        for (j = 0; j < i; j++)
        {
            if (j + 1 == num)
            {

                continue;
            }

            printf("%c ", star);
        }
        printf("\n");
    }

    return 0;
}

/* 

*                   * 
* *               * * 
* * *           * * * 
* * * *       * * * * 
* * * * *   * * * * * 
* * * * * * * * * * * 

*/