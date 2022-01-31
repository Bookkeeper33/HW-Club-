#include <stdio.h>


void arrayCopy(int destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i] = source[i];
    }
}

int main() {
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10];

    arrayCopy(array2, array1, 10);

    for ( int i = 0; i < 10; i++ ) {
        printf("%d ", array2[i]);
    }


    return 0;
}
