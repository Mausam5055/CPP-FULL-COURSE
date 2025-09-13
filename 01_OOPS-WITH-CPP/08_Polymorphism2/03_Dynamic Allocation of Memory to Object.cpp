// 3. Dynamic Allocation of Memory to Object

// We already know how to allocate memory dynamically for integers:

// int *p = new int(5);   // memory allocated at runtime
// cout << *p;            // prints value at address p


// Now For Objects: 

#include <iostream>
using namespace std;

class A {
protected:
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
    A *p = new A(15);   // Dynamic memory allocation for object
    p->disp();          // Accessing member using pointer object

    delete p;           // Free allocated memory
    return 0;
}

// ✅ Key Notes:

// new → allocates memory at runtime.
// delete → frees memory after use.
// p->disp() → access member using pointer object.
