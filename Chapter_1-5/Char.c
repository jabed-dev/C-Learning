#include <stdio.h>

int main()
{
    char ch;
    char l = 'A';

    printf("Enter the first letter of your name: ");
    scanf("%c", &ch);
    printf("The first letter of your name is: %c\n", ch);

    printf("Letter %c\n", l);

    return 0;
}
