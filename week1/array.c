#include <stdio.h>
// массив - структура данных, которая позволяет держать в себе несколько значений
// int main() {
// 	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// 	printf("%d\n", array[0]); // array + 0 * sizeof(int) -это так воспринимает компилятор
// 	// printf("%lu\n", sizeof(int) * 8);

// 	printf("%d\n", array[1]); // array + 1 * sizeof(int)
// 	return 0;
// }


int main () {
	int array[10] = {10, 20, 30, 40, 55, 60, 70, 80, 90, 100};

	for ( int i = 0; i < 10; i++ ) {
		printf("array[%d] = %d\n", i, array[i]);
	}



	return 0;
}
