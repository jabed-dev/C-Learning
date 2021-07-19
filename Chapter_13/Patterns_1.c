#include <stdio.h>

int main()
{
    int num = 5;
    char star = '*';
    int i, j;

    for (i = num; 0 < i; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c ", star);
        }
        printf("\n");
    }

    for (i = 2; i <= num; i++)
    {
        for (j = 0; j < i; j++)
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
* * 
* * * 
* * * * 
* * * * * 

*/