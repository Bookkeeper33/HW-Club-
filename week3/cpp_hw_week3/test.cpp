#include <iostream>

class Car {
    private:
        double maxFuel;
        double currentFuel;
        double consumption;
        char* model;

        bool hasFuel(double fuelNeeded) {
            return fuelNeeded <= this->currentFuel;
        }

    public:
        Car(double maxFuel=100, double currentFuel=100, double consumption=0.18) {
            std::cout << "constructing car" << std::endl;

            this->maxFuel     = maxFuel;
            this->currentFuel = currentFuel;
            this->consumption = consumption;
            this->model       = new char[50];
        }

        ~Car() {
            std::cout << "destructing car" << std::endl;
            delete this->model;
        }

        double getMaxFuel() const {
            return this->maxFuel;
        }

        double getCurrentFuel() const {
            return this->currentFuel;
        }

        double getConsumption() const {
            return this->consumption;
        }

        void setMaxFuel(double maxFuel) {
            this->maxFuel = maxFuel;
        }

        void setCurrentFuel(double currentFuel) {
            if ( currentFuel > this->maxFuel ) {
                currentFuel = this->maxFuel;
            } else if ( currentFuel < 0 ) {
                currentFuel = 0;
            }

            this->currentFuel = currentFuel;
        }

        void setConsumption(double consumption) {
            this->consumption = consumption;
        }

        void travel(double distance) {
            double fuelNeeded = distance * this->consumption;

            this->currentFuel -= fuelNeeded;
            std::cout << "Travelled " << distance << " miles. ";
            std::cout << this->currentFuel << " fuel left." <<std::endl;
        }

        void refill() {
            this->currentFuel = this->maxFuel;
            std::cout << "Car refilled. " << this->currentFuel << " fuel left." <<std::endl;
        }
};

int main() {
    Car *car = new Car();


    delete car;

    return 0;
}