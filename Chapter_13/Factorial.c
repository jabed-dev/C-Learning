#include <stdio.h>

int main() {
    int n = 15;
    double fac = 1;

    for (int i = 1; i <= n; i++) {
        fac *= i;
    }

    printf("%.0lf\n", fac);

    return 0;
}

