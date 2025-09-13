// Inheritance Example (Base Class → Derived Class)


#include <iostream>
using namespace std;

class A {
protected:
    int n;

public:
    A(int k1) {
        n = k1;
    }

    void disp() {
        cout << n;
    }
};

class B : public A {
protected:
    int y;

public:
    B(int y1, int n1) : A(n1) {   // Calling base class constructor
        y = y1;
    }

    void disp() {
        cout << n << " " << y;
    }
};

int main() {
    B b1(5, 6);

    b1.disp();        // Calls derived class version
    b1.A::disp();     // Calls base class version

    return 0;
}


// 🔑 Concept: Binding

// When we create B b1(5, 6);
// First calls constructor of B → B(int y1, int n1)
// Then calls constructor of A → A(int n1)