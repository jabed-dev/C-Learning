#include <stdio.h>

int main()
{
    int arr[] = {3, 1, 5, 2, 4};

    int i, j, temp;
    for (i = 1; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                printf("%d %d < %d %d\n", i, arr[i], arr[j], j);
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}