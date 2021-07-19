#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("'%c' is vowel", ch);
    }
    else if ('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z')
    {
        printf("'%c' is consonant", ch);
    }
    else if ('0' <= ch && ch <= '9')
    {
        printf("'%c' is number", ch);
    }
    else
    {
        printf("'%c' is symbol", ch);
    }

    return 0;
}