#include <stdio.h>

int main() {
	int min, max;
	int cube;
	scanf("%d %d", &min, &max);

	if ( min % 2 == 0 ) {
		min += 1;
	}
	// if ( max % 2 == 0 ) {
	// 	max -= 1;
	// }
	for ( ; min < max - 1; min += 2 ) {
		cube = min * min * min;
        printf("%d ", cube);
    }
   	cube = min * min * min;
    printf("%d\n", min*min*min);

	return 0;
}
