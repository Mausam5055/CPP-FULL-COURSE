// Notes on Accessing Class Members, Inheritance & Dynamic Memory Allocation

// 1. Accessing the Class Members through Pointer Object
// 👉 Pointer object holds the address of a class object.

// Example:

#include <iostream>
using namespace std;

class A {
    int k;

public:
    A(int k1) {
        k = k1;
    }

    void disp() {
        cout << k;
    }
};

int main() {
    A a1(5);         // Normal object (object of class A)

    A *ptr = &a1;    // Pointer object (ptr holds the address of a1)

    ptr->disp();     // Accessing member using pointer (indirection operator)
    a1.disp();       // Accessing member using normal object (dot operator)

    return 0;
}
// Output: 55

// ✅ Points to Remember:

// * → Indirection operator (pointer holds the address).
// -> → Used to access members through a pointer object.
// . → Used to access members through a normal object.