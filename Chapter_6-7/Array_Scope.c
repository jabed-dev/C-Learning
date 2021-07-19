#include <stdio.h>

void test_func(int arr[])
{
    arr[0] = 100;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);

    test_func(arr);
    printf("%d\n", arr[0]);

    return 0;
}