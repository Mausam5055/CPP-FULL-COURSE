#include <iostream>
using namespace std;

class A {
    int *x;   // pointer

public:
    // Default Constructor (no arguments)
    A() {
        x = new int(10);   // allocate memory with default value (say 10)
        cout << "Constructor called\n";
    }

    // Destructor
    ~A() {
        delete x;          // free memory
        cout << "Destructor called, memory freed\n";
    }

    void show() {
        cout << "Value = " << *x << endl;
    }
};

int main() {
    A obj;      // constructor runs without passing argument
    obj.show(); // prints value
} // destructor runs automatically
