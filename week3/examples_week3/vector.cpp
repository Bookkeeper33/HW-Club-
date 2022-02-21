#include <iostream>
#include <cmath>

struct Vector
{
    double x;
    double y;

    void vectorIncrement(Vector other) {
        this->x += other.x;
        this->y += other.y;
    }

    void vectorDecrement(Vector other) {
        this->x -= other.x;
        this->y -= other.y;
    }

    bool vectorEqual(Vector other) {
        return this->x == other.x && this->y == other.y;
    }

    double vectorLen() {
        return hypot(this->x, this->y);
    }

    void vectorPrint() {
        std::cout << "(" << this->x << "," << this->y << ")" << std::endl;
    }
};

// by pointer
Vector vectorSum(Vector* a, Vector* b) {
    Vector sum = *a;

    sum.vectorIncrement(*b);
    return sum;
}

// by reference
Vector vectorDiff(Vector& a, Vector& b) {

    Vector diff = a;

    diff.vectorDecrement(b);
    return diff;
}


int main() {


    Vector vecA, vecB;

    vecA.x = 12.23;
    vecA.y = 23.34;

    vecB.x = 12.21212;
    vecB.y = 23.31232;

    vecA.vectorPrint();
    vecB.vectorPrint();


    std::cout << "&vecA: " << &vecA << std::endl;

    Vector vecC = vectorDiff(vecA, vecB);

    vecC.vectorPrint();

    std::cout << "is equal: " << vecA.vectorEqual(vecB) << std::endl;



    // --------------------------------------------------------------
    // pointers
    int a = 42;
    int* ptr;

    ptr = &a;

    // reference
    int b = 42;
    int& ref = b;

    int foo = 12345;
    ref = foo;

    return 0;
}
