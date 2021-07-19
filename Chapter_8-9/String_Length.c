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
    char country[100];
    printf("What is the name of your country? ");
    gets(country);

    printf("Length: %d\n", str_length(country));

    return 0;
}