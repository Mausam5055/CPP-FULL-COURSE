//Adding Two Complexc Numbers Using Binary + Operator Overloading with Friend Function

#include <iostream>
using namespace std;

class Complex {
    int real, imag; // real and imaginary parts

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Declare friend function for operator+
    friend Complex operator+(Complex c1, Complex c2);

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Definition of friend function
Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3, 4);   // 3 + 4i
    Complex c2(1, 2);   // 1 + 2i

    Complex c3 = c1 + c2;  // calls friend operator+()

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
