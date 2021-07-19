#include <stdio.h>

int sum_number(int arr[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // int arr[] = {100, 0, 53, 22, 83, 23, 89, 132, 201, 3, 85};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int sum = sum_number(arr, n);

    printf("%d\n", sum);

    return 0;
}
