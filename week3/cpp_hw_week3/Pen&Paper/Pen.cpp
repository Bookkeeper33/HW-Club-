#include "Paper.h"
#include "Pen.h"

Pen::Pen(int inkCapacity) {
    this->inkCapacity = inkCapacity;
    this->inkAmount = inkCapacity;
}

Pen::~Pen() {

}

int Pen::getInkAmount() const {
    return this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    if ( this->inkCapacity < 0 ) {
        std::cout << "You have a wrong pen capacity." << std::endl;
        return;
    }

    if ( this->inkAmount == 0 ) {
        throw OutOfInk();
    }

    if ( this->inkAmount < message.length() ) {
        paper.addContent(message.substr(0, this->inkAmount));
        this->inkAmount = 0;

        return;
    }

    paper.addContent(message);
    this->inkAmount -= message.length();
}

void Pen::refill() {
    if ( this->inkCapacity < 0 ) {
        std::cout << "You have a wrong pen capacity. Change it." << std::endl;
        return;
    }
    this->inkAmount = this->inkCapacity;
}