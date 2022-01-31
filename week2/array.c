#include <stdio.h>
// массив - структура данных, которая позволяет держать в себе несколько значений
// int main() {
// 	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// 	printf("%d\n", array[0]); // array + 0 * sizeof(int) -это так воспринимает компилятор
// 	// printf("%lu\n", sizeof(int) * 8);

// 	printf("%d\n", array[1]); // array + 1 * sizeof(int)
// 	return 0;
// }

#define SIZE 10
// массивы принято указывать таким образом array[] - аналогично *array

void arrayPrint(int array[], int size) {
	int last = size - 1;

	for ( int i = 0; i < last; i++ ) {
		printf("%d ", array[i]);
	}
	printf("%d\n", array[last]);
}

void arrayIncrement(int *array, int size ) {
	for ( int i = 0; i < size; i++ ) {
		array[i] += 1;
	}
}

void arrayZeroFill(int *array, int size) {
	for ( int i = 0; i < size; i++ ) {
		array[i] = 0;
	}
}

void arrayScan(int array[], int size) {
	for ( int i = 0; i < size; i++ ) {
		scanf("%d", &array[i]);
	}
}



int main () {
	// int array[SIZE] = {10, 20, 30, 40, 55, 60, 70, 80, 90, 100};
	int array[5] = {1, 2, 3, 4, 5};

	printf("%d\n", *(array + 7));

	return 0;
}
