#include <stdio.h>

void printLine(int limit) {
	for ( int i = 1; i < limit; i++ ) {
    	printf("%d,", i);
    }
    printf("%d\n", limit);
}


int increment(int x, int inc) {
	return x + inc;
}


int main() {
	int limit;

	scanf("%d", &limit);
    
    printLine(limit);
    
    limit = increment(limit, 5);

    printLine(limit);

    return 0;
}
