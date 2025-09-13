// Accessing Derived Class Members Using Base Class Pointer

#include <iostream>
using namespace std;

class A {
protected:
    int n;

public:
    void input(int n1) {
        n = n1;
    }

    virtual void disp() {   // virtual
        cout << n << endl;
    }
};

class B : public A {
protected:
    int y;

public:
    void input(int y1) {
        y = y1;
    }

    void disp() override {  // overriding
        cout << y << endl;
    }
};

int main() {
    A *p;
    B b1;

    p = &b1;      // Base pointer holding Derived object
    p->input(5);  // Calls Derived class input()
    p->disp();    // Calls Derived class disp()

    return 0;
}
// ✅ Notes

//1. Base class pointer can hold the address of a derived class object.
//2. But functions will be resolved at runtime (dynamic binding) if they 
// are declared virtual in Base class.

//3. Without virtual, only Base class functions are called (even if the pointer holds derived object).