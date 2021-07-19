#include <stdio.h>

int main()
{
    int total_marks[40] = {86, 78, 94, 69, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 71, 74, 78, 76, 84, 88, 73, 63, 66, 77, 71, 67, 65, 77, 63};

    printf("Marks Counting Algo-1: \n");
    printf("-----------------------\n");

    int students = 40, marks, i, count = 0;
    for (marks = 50; marks <= 100; marks++)
    {
        for (i = 0; i < students; i++)
        {
            if ((int)total_marks[i] == marks)
            {
                count++;
            }
        }
        if (count)
        {
            printf("Marks: %d Count: %d\n", marks, count);
            count = 0;
        }
    }

    printf("\n\nMarks Counting Algo-2: \n");
    printf("----------------------\n");

    int marks_count[101];

    for (i = 0; i <= 100; i++)
    {
        marks_count[i] = 0;
    }
    for (i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }

    for (i = 50; i <= 100; i++)
    {
        if (marks_count[i])
        {
            printf("Marks: %d Count: %d\n", i, marks_count[i]);
        }
    }

    return 0;
}