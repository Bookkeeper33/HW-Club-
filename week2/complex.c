#include <stdio.h>
#include <math.h>

typedef struct {
    double re,im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}
void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    double tmpA = this->re * other.re - this->im * other.im;
    double tmpB = this->re * other.im + this->im * other.re;

    this->re = tmpA;
    this->im = tmpB;
}

Complex complexSum(Complex a, Complex b) {
    Complex c = a;

    complexIncrement(&c, b);
    return c;
}

Complex complexDiff(Complex a, Complex b) {
    Complex c = a;

    complexDecrement(&c, b);
    return c;
}

Complex complexProduct(Complex a, Complex b) {
    Complex c = a;

    complexMultiply(&c, b);
    return c;
}

int complexEqual(Complex a, Complex b) {
    return a.re == b.re && a.im == b.im;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    printf("%g%+gi", this.re, this.im);
}

int main() {
    Complex a = {1.2, -20};
    Complex other = {2, 5.4};
    Complex b = {1.2, 3};

    // printf("%g and %g\n", a.x, a.y);

    // complexIncrement(&a, other);
    // printf("%g and %g\n", a.x, a.y);

    // complexDecrement(&a, other);
    // printf("%g and %g\n", a.x, a.y);

    // complexMultiply(&a, other);
    // printf("%g and %g\n", a.x, a.y);

    complexMultiply(&a, other);
    printf("%g+%gi\n", a.re, a.im);

    complexMultiply(&b, other);
    printf("%g+%gi\n", b.re, b.im);

    printf("%g\n", complexSum(a,b));

    if ( complexEqual(a,b) == 1 ) {
        printf("Complex numbers are equal!\n");
    } else {
        printf("Nope\n");
    }

    printf("ABS: %g\n", complexAbs(a));

    complexPrint(a);

    return 0;
}