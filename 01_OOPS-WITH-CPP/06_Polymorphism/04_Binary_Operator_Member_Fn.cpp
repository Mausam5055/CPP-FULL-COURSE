//Adding Two Complexc Numbers Using Binary + Operator Overloading

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

    // Overload + operator (binary)
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);   // 3 + 4i
    Complex c2(1, 2);   // 1 + 2i

    Complex c3 = c1 + c2;  // calls operator+()

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
