#include <iostream>
#include "Complex.h"

int main() {
    Complex *a = new Complex(2, 3.2);
    Complex *b = new Complex(2, 3.2);
    Complex *c = new Complex();
    Complex *z = new Complex();

    std::cout << "Complex a: " << *a << "\n"
              << "Complex b: " << *b << "\n"
              << "Complex c: " << *c << "\n"
              << "=====================" 
              << std::endl;

    std::cout << "Get Complex A      (real) " << a->getReal() << "\n"
              << "Get Complex A (imaginary) " << a->getImaginary() << "\n"
              << "====================="
              << std::endl;

    if ( *a == *b ) {
        std::cout << "A and B are equal!" << std::endl;
    } else {
        std::cout << "A and B are not equal!" << std::endl;
    }

    std::cout << "is  A not equal to C ? " << (*a != *c) << std::endl;

    *a += *b;
    std::cout << "Complex a after += -> " << *a << std::endl;

    *b -= *a;
    std::cout << "Complex b after -= -> " << *b << std::endl;

    *c = *a + *b;
    std::cout << "Complex c after + -> " << *c << std::endl;

    *c = *b - *a;
    std::cout << "Complex c after - -> " << *c << std::endl;

    *z = *a * *b;
    std::cout << "Complex z after * -> " << *z << std::endl;

    delete a;
    delete b;
    delete c;
    delete z;

    return 0;
}