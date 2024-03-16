#include <stdio.h>

long double calculatePi(int precision) {
    int i;
    long double pi = 0.0;
    for (i = 0; i < precision; i++) {
        pi += (i % 2 == 0 ? 1.0 : -1.0) / (2.0 * i + 1);
    }
    pi *= 4.0;
    return pi;
}

int main() {
    int precision = 100000000;
    long double pi = calculatePi(precision);
    int digits = 68;
    printf("%.*Lf\n", digits, pi);
    
    /* In case printf is not printing correctly
    
    printf("%d.", (int)pi);
    pi -= (int)pi;
    for (i = 1; i <= 100; i++) {
        pi *= 10;
        printf("%d", (int)pi);
        pi -= (int)pi;
    }

    printf("\n");
    */
    
    return 0;
}
