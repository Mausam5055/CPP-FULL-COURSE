#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    // Function to input real and imaginary parts
    void input(int r, int i) {
        real = r;
        imag = i;
    }

    // Function to display the complex number
    void output() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Friend function declaration
    friend Complex addComplex(Complex c1, Complex c2);
};

// Friend function definition
Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, result;

    // Input values
    c1.input(5, 3);   // 5 + 3i
    c2.input(4, 7);   // 4 + 7i

    // Add using friend function
    result = addComplex(c1, c2);

    // Output result
    cout << "Sum of two complex numbers: ";
    result.output();  // Output: 9 + 10i

    return 0;
}