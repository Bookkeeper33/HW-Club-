#include <iostream>
#include "Point.h"
#include "Car.h"

using namespace std;

int main() {
    Point *point = new Point(5, 10);
    Car *car = new Car(60, 0, *point, "Mazda 3");

    cout << *car << endl;

    cout << "=============" << endl;

    cout << "Get fuelAmount     : " << car->getFuelAmount() << endl;
    cout << "Get fuelCapacity   : " << car->getFuelCapacity() << endl;
    cout << "Get fuelConsumption: " << car->getFuelConsumption() << endl;
    cout << "Get location: " << car->getLocation() << endl;
    cout << "Get model: " << car->getModel() << endl;

    cout << "==============" << endl;

    car->refill(5);
    cout << "Tank after refill: " << car->getFuelAmount() << endl;

    car->drive(Point(15, 25));

    cout << "New location: " << car->getLocation() << endl;
    cout << "Current fuelAmount: " << car->getFuelAmount() << endl;

    delete car;
    delete point;

    return 0;
}