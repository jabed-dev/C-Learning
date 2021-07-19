#include <stdio.h>

int main()
{
    char sentence[280];
    printf("Enter your sentence: \n");
    gets(sentence);


    for (int i = 0; sentence[i] != '\0' && i < 280; i++)
    {
        if (sentence[i] == '\'' && (sentence[i - 1] >= 'a' && sentence[i - 1] <= 'z') && (sentence[i + 1] >= 'a' && sentence[i + 1] <= 'z'))
        {
            printf("%c", sentence[i]);
        }
        else if (!(sentence[i] >= 'A' && sentence[i] <= 'Z') && !(sentence[i] >= 'a' && sentence[i] <= 'z') && !(sentence[i] >= 0 && sentence[i] <= 9))
        {
            if (sentence[i] != ' ' && sentence[i - 1] != ' ')
            {
                printf("\n");
            }
        }
        else if ((i == 0 || sentence[i - 1] == ' ') && sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            printf("%c", sentence[i] - 'a' + 'A');
        }
        else if (sentence[i + 1] == ' ')
        {
            printf("%c\n", sentence[i]);
        }
        else
        {
            printf("%c", sentence[i]);
        }
    }

    printf("\n");

    return 0;
}
