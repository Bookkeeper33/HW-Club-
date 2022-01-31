#include <stdio.h>
#include <math.h>


typedef struct {
    double x;
    double y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(b.x-a.x, b.y-a.y);
}


int main() {
    Point a = {1.2, 2};
    Point b = {2, 3};

    pointPrint(a);

    if ( pointEqual(a,b) ) {
        printf("%g and %g is equal to %g and %g.\n", a.x, b.x, a.y, b.y);
    }

    printf("%g\n", pointDistance(a,b));

    return 0;
}