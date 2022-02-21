#include <iostream>
#include "Vector.h"

int main() {

    Vector *vecA = new Vector(2, 4);
    Vector *vecB = new Vector(5.5, 1.2);
    Vector *vecC = new Vector();
    Vector *vecZ = new Vector();

    std::cout << "vecA(x): " << vecA->getX() << ", vecA(y): " << vecA->getY() << std::endl;
    std::cout << "vecB(x): " << vecB->getX() << ", vecB(y): " << vecB->getY() << std::endl;
    std::cout << "vecC(x): " << vecC->getX() << ", vecC(y): " << vecC->getY() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    vecA->setX(5.5);
    vecA->setY(1.4);
    std::cout << "vecA(x): " << vecA->getX() << ", vecA(y): " << vecA->getY() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    std::cout << "Len vecB is = " << vecB->len() << std::endl;
    std::cout << "-----------------------------" << std::endl;

    if ( vecA == vecB ) {
        std::cout << "VecA is equal to VecB" << std::endl;
    } else {
        std::cout << "VecA is not equal to VecB" << std::endl;
    }

    std::cout << "vecC is not equal to vecB " << ( vecC != vecB ) << std::endl;
    std::cout << "-----------------------------" << std::endl;

    *vecA += *vecB;

    std::cout << "VecA after +=: " << *vecA << std::endl;

    *vecB -= *vecA;

    std::cout << "VecB after -=: " << *vecB << std::endl;

    *vecC = *vecA + *vecB;
    std::cout << "VecC after  +: " << *vecC << std::endl;

    *vecZ = *vecA - *vecB;
    std::cout << "VecZ after  -: " << *vecZ << std::endl;

    delete vecA;
    delete vecB;
    delete vecC;
    delete vecZ;

    return 0;
}