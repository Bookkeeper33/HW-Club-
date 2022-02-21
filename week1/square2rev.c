#include <stdio.h>

int main() {
    int size;
    int counter;
    
    scanf("%d", &size);
    
    for ( int row = 1, reversed = size; row <= size; row++, reversed-- ) {
        counter = size * (reversed - 1) + 1;
        for ( int col = 1; col < size; col++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
    }
    
    return 0;
}




// #include <stdio.h>

// int main() {
//     int total;
//     int counter;
//     scanf("%d", &total);

//     for ( int row = 1, reversed = total *  total; row <= total; row++, reversed -= total ) {
//         for ( int col = 1; col < total; col++) {
//             counter = total * total - 1;
//             printf("%d ", counter);
//             counter -= 1;  
//         }
//         printf("%d\n", reversed);
//     }

//  return 0;
// }


