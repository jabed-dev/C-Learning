#include <stdio.h>

int min_number(int arr[], int n)
{
    int min = arr[0], i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {100, 10, 53, 22, 83, 23, 89, 132, 201, 3, 85};
    int n = 11;
    int min = min_number(arr, n);

    printf("%d\n", min);

    return 0;
}
