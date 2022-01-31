#include <stdio.h>

int readStr(FILE *in) {
    int lenght = 0;

    for ( char symbol; fscanf(in, "%c", &str[lenght]) != EOF; lenght++ );
    return lenght;
}

void strRev(char str[], int size) {
    for ( int i = 0; j = size - 1; i < j; i++, j-- ) {
        char tmp = str[i];

        str[i] = str[j];
        str[j] = tmp;
    }
}


int main() {
    FILE *in = fopen("task.in", "r")
    char str[100];
    int lenght = readStr(in, str);

    printf("%s is %d symbols\n", str, lenght);

    return 0;
}