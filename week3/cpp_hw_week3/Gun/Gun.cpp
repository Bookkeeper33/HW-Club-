#include "Gun.h"

Gun::Gun (const std::string& model, int capacity) {
    this->amount = 0;
    this->capacity = capacity;
    this->isReady = false;
    this->model = model;
    this->totalShots = 0;
}

Gun::~Gun() {

}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    this->isReady = !this->isReady;
}

void Gun::reload() {
    this->amount = capacity;
}

void Gun::shoot() {
    if ( !this->ready() ) {
        throw NotReady();
    }

    if ( this->amount == 0 ) {
        throw OutOfRounds();
    }

    if ( this->capacity < 0 ) {
        std::cout << "Wrong clip capacity. Can't reload." << std::endl;
        return;
    }

    std::cout << "BANG!" << std::endl;
    this->totalShots += 1;
    this->amount -= 1;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "Gun model      : " << gun.getModel() << "\n"
        << "Clip capacity   : " << gun.getCapacity() << "\n"
        << "Bullets in the clip: " << gun.getAmount() << "\n"
        << "Ready to fire  : " << gun.ready() << "\n"
        << "Shots fired    : " << gun.getTotalShots() << "\n";
    
    return out;
}
