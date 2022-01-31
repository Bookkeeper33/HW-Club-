#include <stdio.h>

int sum(int x, int y) {
	if ( x > y ) {
		return x;
	} else {
		return y;
	}

}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", sum(a,b));

	return 0;
}
