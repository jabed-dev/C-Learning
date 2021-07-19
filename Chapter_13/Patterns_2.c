#include <stdio.h>

int main()
{
    int num = 7;
    int row, col = num;

    if (num % 2 == 1)
    {
        row = (num + 1) / 2;
    }
    else
    {
        row = num / 2;
        col = num - 1;
    }
    char star = '*';
    int i, j, k;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < col - (j * 2); k++)
        {
            printf("%c ", star);
        }
        printf("\n");
    }

    for (i = 2; i <= row; i++)
    {
        for (j = 0; j <= (col / 2) - i; j++)
        {
            printf("  ");
        }

        for (k = 0; k < col - (j * 2); k++)
        {
            printf("%c ", star);
        }
        printf("\n");
    }

    return 0;
}

/* Output

* * * * * * * 
  * * * * * 
    * * * 
      * 
    * * * 
  * * * * * 
* * * * * * * 

*/