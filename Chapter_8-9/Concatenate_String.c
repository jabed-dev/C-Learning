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

int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[20];

    int i, j;
    for (i = 0; i < str_length(str1); i++)
    {
        str3[i] = str1[i];
    }
    for (j = 0; j < str_length(str2); i++, j++)
    {
        str3[i] = str2[j];
    }
    str3[i] = '\0';

    printf("%s\n", str3);

    return 0;
}