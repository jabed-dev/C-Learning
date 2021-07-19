#include <stdio.h>

int average_number(int arr[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum / n;
}

int main()
{
    int arr[] = {100, 10, 53, 22, 83, 23, 89, 132, 201, 3, 85};
    int n = 11;
    int average = average_number(arr, n);

    printf("%d\n", average);

    return 0;
}
