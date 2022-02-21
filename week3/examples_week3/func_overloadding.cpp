#include <iostream>

struct Point {
    double x;
    double y;
}
// T, X, Y, Z, U
template <typename T>
T sum(T a, T b) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; // __FUNCTION__
    return a + b;
}

template <typename T, typename Y>
T sum(T a, T b) {
    std::cout << __PRETTY_FUNCTION__ << std::endl; // __FUNCTION__
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    Point a;
    Point b;

    a.x = 12;
    a.y = 1;

    b.x = 23;
    b.y = 12;

    std::cout << "sum(int a, int b)                 :" << sum(12, 23) << std::endl;
    std::cout << "sum(int a, int b, int c)          :" << sum(12, 23, 34) << std::endl;
    std::cout << "sum(Point a, Point b)         :" << sum(a, b) << std::endl;

    return 0;
}
