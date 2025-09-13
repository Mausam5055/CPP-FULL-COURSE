// Base Class Pointer with Derived Class Object

#include <iostream>
using namespace std;

class A {
protected:
    int n;

public:
    void input(int s) {
        n = s;
    }

    void disp() {
        cout << n << endl;
    }
};

class B : public A {
protected:
    int y;

public:
    void input(int s) {
        y = s;
    }

    void disp() {
        cout << y << endl;
    }
};

int main() {
    A *p, a1;   // Base class pointer & object
    B b1;       // Derived class object

    p = &a1;    // p holds Base class object
    p->input(5);  
    p->disp();   // Calls Base class functions

    p = &b1;    // p holds Derived class object
    p->input(6);  
    p->disp();   // ❌ Still calls Base class functions, not Derived

    return 0;
}

// 🔑 Explanation

// In the above program,

// Base class pointer can hold the address of a Derived class object.
// But it will still call only the Base class member functions (not derived ones).
// This is because at compile time, the system checks the type of pointer (Base) rather than the object it is holding.

// 👉 But we want to access derived class functions as well.
//so we sue concept of virtual fyunctions



