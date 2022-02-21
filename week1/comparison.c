#include <stdio.h>

char* serialyze(int value) {
	if ( value == 0 ) {
		return "False";
	} else {
		return "True";
	}
}

int sum(int x, int y) {
	return x + y;
}

void printHello() {
	printf("Hello\n");
}

int sum3(int x, int y, int z) {
	return x + y + z;
}

int main() {
	int x = 10;
	int y = 42;
    char c = 'A';

    int res = x > y;

    printf("%d > %d is %s\n", x, y, serialyze(res));
    
    res = x <= y;
    printf("%d <= %d is %s\n", x, y, serialyze(res));

    res = x < y;
    printf("%d < %d is %s\n", x, y, serialyze(res));

    res = x <= y;
    printf("%d <= %d is %s\n", x, y, serialyze(res));

    res = x == y;
    printf("%d == %d is %s\n", x, y, serialyze(res));

    res = x != y;
    printf("%d != %d is %s\n", x, y, serialyze(res));

    res = c > y;
    printf("%c > %d is %s\n", c, y, serialyze(res));

	
    printf("Sum %d & %d = %d\n", x, y, sum(x,y));

	return 0;
}
