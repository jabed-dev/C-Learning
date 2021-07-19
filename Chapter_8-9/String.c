#include <stdio.h>

int main()
{
    char country_arr[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    printf("%s\n", country_arr);
    char country_str[] = "Bangladesh";
    printf("%s\n", country_str);

    char countrx[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y', '\0'};
    printf("%s\n", countrx);

    return 0;
}

