#include <iostream>
using namespace std;

class A {
    int *x;   // pointer

public:
    // Constructor
    A(int n) {
        x = new int(n);  // dynamic memory
        cout << "Constructor called\n";
    }

    // Destructor
    ~A() {
        delete x;        // free memory
        cout << "Destructor called, memory freed\n";
    }

    void show() {
        cout << "Value = " << *x << endl;
    }
};

int main() {
    A obj(5);   // constructor runs
    obj.show(); // prints value
} // destructor runs automatically here

// Constructor called
// Value = 5
// Destructor called, memory freed