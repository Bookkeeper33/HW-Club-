#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    this->fuelAmount = 0;
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}

Car::~Car() {

}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car:: getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double neededFuel;

    if ( this->fuelConsumption <= 0 ) {
        std::cout << "Incorrect fuel consumption data." << std::endl;
        return;
    }

    neededFuel = this->location.distance(destination) * this->fuelConsumption;
    
    if ( this-> fuelAmount <= 0 ) {
        throw OutOfFuel();
    }

    if ( this->fuelAmount < neededFuel ) {
        std::cout << "Sorry, but you have not enough fuel to get to the destination." 
                  << "Plz refill your tank.\n"
                  << "Current fuel: " << this->fuelAmount << "\n"
                  << "Fuel needed: " << neededFuel << std::endl; 
        throw OutOfFuel();
    }

    this->fuelAmount -= neededFuel;
    this->location = destination;

}

void Car::drive(double x, double y) {
    this->drive(Point(x, y));
}

void Car::refill(double fuel) {
    double newFuelAmount;

    if  ( fuel <= 0 ) {
        std::cout << "Inccorect fuel refill data." << std::endl;
        return;
    }

    newFuelAmount = this->fuelAmount + fuel;
    if ( fuel > this->fuelCapacity || newFuelAmount > this->fuelCapacity ) {
        throw ToMuchFuel();
    }

    this->fuelAmount = newFuelAmount;
}


std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Car info" << "\n"
        << "=================" << "\n"
        << "Model            : " << car.getModel() << "\n"
        << "Capacity         : " << car.getFuelCapacity() << "l." <<"\n"
        << "Consumption      : " << car.getFuelConsumption() << "l." <<"\n"
        << "Fuel amount      : " << car.getFuelAmount() <<  "l." << "\n"
        << "Current location : " << car.getLocation();

        return out;
}