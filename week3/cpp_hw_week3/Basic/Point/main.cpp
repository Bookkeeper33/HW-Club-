#include <iostream>
#include "Point.h"

int main() {
    Point x(15, 2);
    Point y(2, 4);
    Point z;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    if ( x != y ) {
    std::cout << x << " is not equal to " << y << std::endl;
    } else {
    std::cout << x << " is equal to " << y << std::endl;
    }

    std::cout << "Distance: " << x.distance(y) << std::endl;
    
    std::cout << "\n";

    x.setX(5);
    x.setY(10);

    y.setX(15);
    y.setY(12.1);
    
    z.setX(5);
    z.setY(10);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;

    std::cout << "\n";

    std::cout << "x.getX() => " << x.getX() << " x.getY() => " << x.getY() << std::endl;
    std::cout << "y.getX() => " << y.getX() << " y.getY() => " << y.getY() << std::endl;
    std::cout << "z.getX() => " << z.getX() << " z.getY() => " << z.getY() << std::endl;

    std::cout << "\n";

    std::cout << "is equal: " << (x == z) << std::endl;

    return 0;
}

