// Polymorphism 👉 One can have many forms

// Types of Polymorphism
// 1.Run-time polymorphism.(Function Ovaerloading)
// 2.Compile-time polymorphism.(Operator Overloading)
// Important Note

// 👉 Linking of function definition (e.g. operator+()) to its function call in main() is 
// done by the compiler.
// 👉 If linking happens at run-time → Run-time polymorphism.
// 👉 If linking happens at compile-time → Compile-time polymorphism.

// Operator Overloading
// 👉 Operation can be categorized into :

// Unary Operator (Single operand)
// Example: -a

// Binary Operator (Two operands)
// Example: a + b

// Ternary Operator (Three operands)
// Example: (a > b ? a : b)

// Note 1:
// For predefined data types like int, float, etc. → Operators can be directly used, 
// because their operation logic is already defined in C++ compiler.

// ✅ Example:
// int a = 1, b = 2;
// int c = a + b;  // Addition logic is already predefined in compiler

// Note 2
// For user-defined data types → operators cannot be directly used.
// We have to explicitly define and tell the compiler how to perform operations.
// This is called defining an operator → operator overloading.

//EXAMPLE:

// We cannot directly add two complex numbers
// We must define function to add them


#include <iostream>
using namespace std;
class Complex {
    int real, imag;

public:
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    // Operator overloading (+)
    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2; // Uses overloaded +
    c3.display();
    return 0;
}


// Definition
// 👉 Operator overloading means giving a new meaning to an existing operator so that it
// can also work with user-defined data types in the same way as it works with built-in 
// data types.