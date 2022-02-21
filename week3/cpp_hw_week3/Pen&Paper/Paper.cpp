#include <string>
#include "Paper.h"

Paper::Paper(int maxSymbols) {
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
}

Paper::~Paper() {

}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}

int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    int symbolsLeft;

    if ( this->maxSymbols < 0 ) {
        std::cout << "Wrong max symbol param." << std::endl;
        return;
    }
    
    if ( this->symbols == this->maxSymbols ) {
        throw OutOfSpace();
    }

    symbolsLeft = this->maxSymbols - this->symbols;

    if ( message.length() > symbolsLeft ) {
        this->content +=  message.substr(0, symbolsLeft);
        this->symbols = this->maxSymbols;
        return;;
    }
    
    this->content += message;
    this->symbols += message.length();
}

void Paper::show() const {
    if ( this->symbols == 0 ) {
        std::cout << "Paper is empty." << std::endl;
        return;
    }

    std::cout << this->content << std::endl;
}