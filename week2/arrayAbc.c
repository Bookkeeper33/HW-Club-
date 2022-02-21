#include <stdio.h>

void arrayAbc(int array[], int size) {
	for ( int i = 0; i < size; i++ ) {
		if ( array[i] < 0 ) {
			array[i] *= -1;
		}
	}
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayAbs(arr, 10);

    return 0;
}

