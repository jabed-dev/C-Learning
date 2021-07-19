#include <stdio.h>

int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp, array_length = 10;

    for (i = 0, j = array_length - 1; i < array_length / 2; i++, j--)
    {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }

    for (i = 0; i < array_length; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
