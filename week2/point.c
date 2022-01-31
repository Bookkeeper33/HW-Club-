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
    return hypot(a.x-b.x, a.y-b.y);
}

int main() {
    Point x = {2.5, 3.5};
    Point y = {1.2, 2.2};
    Point z = {1.0, 2.0};

    pointPrint(x);
    printf("%d\n", pointEqual(x,y));
    printf("%d\n", pointEqual(x,z));

    printf("%g\n", pointDistance(x,y));

    return 0;
}
