#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    scanf("%s", str);

    int len = strlen(str);
    int i, j, pd = 1;

    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            pd = 0;
            break;
        }
    }

    if (pd)
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}
