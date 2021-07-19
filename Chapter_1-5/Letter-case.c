#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if ('a' <= ch && ch <= 'z')
    {
        printf("'%c' is lower case\n", ch);
    }
    else if ('A' <= ch && ch <= 'Z')
    {
        printf("'%c' is upper case\n", ch);
    }

    return 0;
}