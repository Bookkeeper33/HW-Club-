// #include <stdio.h>

// int main() {
//     int total;
//     int counter = 1;

//     scanf("%d", &total);

//     for ( int row = 1; row <= total; row++ ) {
//     	for ( int col = 1; col < total; col++ ) {
//     		printf("%d ", counter);
//     		counter += 1;
//     	}
//     	printf("%d\n", counter);
//     	counter += 1
//     }

// 	return 0;
// }

#include <stdio.h>

int main() {
    int size;
    int counter = 1;
    
    scanf("%d", &size);
    
    for (int i = 1; i <= size; i++ ) {
        for (int j = 1; j < size; j++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }

    return 0;
}
