#include <stdio.h>

int main()
{
    int num = 5;
    int i, j, k;
    char star = '*';

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < num - j; k++)
        {
            printf("%c ", star);
        }
        printf("\n");
    }
    for (i = 1; i <= num; i++)
    {
        for (j = 0; j < num - i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < num - j; k++)
        {
            printf("%c ", star);
        }
        printf("\n");
    }

    return 0;
}

/* Output

* * * * * 
  * * * * 
    * * * 
      * * 
        * 
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

*/