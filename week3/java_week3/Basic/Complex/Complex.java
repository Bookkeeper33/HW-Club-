public class Complex {
    private double real;
    private double imaginary;

    public Complex() {
        this.real = 0;
        this.imaginary = 0;
    }

    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    public double getReal() {
        return this.real;
    }

    public double getImaginary() {
        return this.imaginary;
    }

    public boolean equals(Complex other) {
        return this.real == other.real && this.imaginary == other.imaginary;
    }

    public void increment(Complex other) {
        this.real += other.real;
        this.imaginary += other.imaginary;
    }

    public void decrement(Complex other) {
        this.real -= other.real;
        this.imaginary -= other.imaginary;
    }

    public Complex sum(Complex other) {
        Complex result = new Complex(this.real + other.real, this.imaginary + other.imaginary);
        
        return result;
    }

    public Complex diff(Complex other) {
        Complex result = new Complex(this.real - other.real, this.imaginary - other.imaginary);
        
        return result;
    }

    public Complex multiply(Complex other) {
        Complex result = new Complex();

        result.real = this.real * other.real - this.imaginary * other.imaginary;
        result.imaginary = this.real * other.imaginary + this.imaginary * other.real;
        
        return result;
    }

    public void output() {
        if ( this.imaginary < 0 ) {
            System.out.println(this.real + "" + this.imaginary + "i");
        } else {
            System.out.println(this.real + "+" + this.imaginary + "i");
        }
    }
}
