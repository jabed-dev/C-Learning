#include <stdio.h>

int main() {
    int n = 1;
    while (n <= 100) {
        printf("%d\n", n);
        if (n == 10) {
            break;
        }
        n++;
    }
    printf("\n\n");

    n = 0;
    while (n < 10) {
        n++;
        if (n == 5) {
            continue;
        }
        printf("%d\n", n);
    }

    return 0;
}