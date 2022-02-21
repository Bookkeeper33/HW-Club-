#include <stdio.h>

// int main() {
//     int x;
    
//     scanf("%d", &x);

//     if ( x % 2 == 0 ) {
//         printf("%d", x);
//     } else {
//     	printf("%d", x + 1);
//     }
    
//     return 0;	
// }
#include <stdio.h>

int main() {
    int x, y, z;
    int max;

    scanf("%d %d %d", &x, &y, &z);

    max = x;

    if ( y > max ) {
    	max = y;
    }
    if ( z > max ) {
    	max = z;
    } 

    printf("%d", max );

    return 0;
}
