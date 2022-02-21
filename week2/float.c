#include <stdio.h>

int main() {
    float x = 1.7894; // числа с плав точкой
    double y = 1.0; // числа с двойной точностью

    // printf("%lu\n", sizeof(float)*8);
    // printf("%lu\n", sizeof(double)*8);

    printf("%.2f\n", x); // %f 6 знаков после запятой
    // printf("%g\n", x); // %g округляется

    return 0;
}