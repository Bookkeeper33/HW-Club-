#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    return a.x == b.x && a.y == b.y;
}

Vector vectorSum(Vector a, Vector b) {
    a.x = a.x + b.x;
    a.y = a.y + b.y;
    return a;
}

Vector vectorDiff(Vector a, Vector b) {
    a.x = a.x - b.x;
    a.y = a.y - b.y;
    return a;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}


int main() {
    Vector a = {24.8, 12.1};
    Vector other = {1, 2};
    Vector b = {24.8, 11.1};

    printf("%g and %g\n", a.x, a.y);

    vectorIncrement(&a, other);

    printf("%g and %g\n", a.x, a.y);

    vectorDecrement(&a, other);
    printf("%g and %g\n", a.x, a.y);

    if ( vectorEqual(a,b) ) {
        printf("Vector a is equal to Vector b\n");
    } else {
        printf("Nope\n");
    }

    printf("%g\n", vectorSum(a,b));
    printf("%g\n", vectorDiff(a,b));

    printf("Vector length is %g\n", vectorLen(a));

    vectorPrint(a);

    printf("%g and %g\n", a.x, a.y);

    return 0;
}