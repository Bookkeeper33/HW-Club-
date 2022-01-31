#include <stdio.h>
#include <math.h>

int main() {
    short int si;
    int i;
    long int li;

    printf("Size of short int: %lu Bytes\n", sizeof(si));
    printf("Size of       int: %lu Bytes\n", sizeof(i));
    printf("Size of  long int: %lu Bytes\n", sizeof(li));

    printf("Size of short int: -%d...%d values\n", (int)pow(2, sizeof(si) * 8) - 1);
    printf("Size of       int: -%d...%d values\n", (int)pow(2, sizeof(i) * 8) - 1);
    printf("Size of  long int: -%llu...%llu values\n", (long long unsigned)pow(2, sizeof(li) * 8) - 1);

    unsigned short int usi;
    unsigned int ui;
    unsigned long int uli;

	return 0;
}
