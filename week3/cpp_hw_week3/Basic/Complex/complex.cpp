#include "Complex.h"

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() {

}

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

void Complex::operator+=(const Complex& other) {
    this->real += other.real;
    this->imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
    this->real -= other.real;
    this->imaginary -= other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    Complex result = *this;

    result += other;
    return result;
}

Complex Complex::operator-(const Complex& other) const {
    Complex result = *this;

    result -= other;
    return result;
}

Complex Complex::operator*(const Complex& other) const {
    Complex result;

    result.real = this->real * other.real - this->imaginary * other.imaginary;
    result.imaginary = this->real * other.imaginary + this->imaginary * other.real;

    return result;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    if ( complex.getImaginary() < 0 ) {
        out << complex.getReal() << complex.getImaginary() << "i";
    } else {
        out << complex.getReal() << "+" << complex.getImaginary() << "i";
    }
    return out;
}