#include <stdio.h>

int str_length(char str_arr[])
{
    int length = 0;
    while (str_arr[length] != '\0')
    {
        length++;
    }
    return length;
}

int str_compare(char a[], char b[])
{
    for (int i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] < b[i])
        {
            return -1;
        }
        else if (a[i] > b[i])
        {
            return 1;
        }
    }

    int al = str_length(a), bl = str_length(b);

    if (al == bl)
    {
        return 0;
    }
    else if (al > bl)
    {
        return 1;
    }
    else if (al < bl)
    {
        return -1;
    }
}

int main()
{
    char str1[] = "HEllooo";
    char str2[] = "HEll";

    printf("%d\n", str_compare(str1, str2));

    return 0;
}
