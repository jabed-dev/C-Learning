#include <stdio.h>

int max_number(int arr[], int n)
{
    int max = arr[0], i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {100, 0, 53, 22, 83, 23, 89, 132, 201, 3, 85};
    int n = 11;
    int max = max_number(arr, n);

    printf("%d\n", max);

    return 0;
}
