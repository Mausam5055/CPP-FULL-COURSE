// To achieve this(as discuseed in previopus code), we declare base class functions as virtual.
// Example with virtual:

#include <iostream>
using namespace std;

class A {
protected:
    int n;

public:
    virtual void input(int s) {   // virtual function
        n = s;
    }

    virtual void disp() {         // virtual function
        cout << n << endl;
    }
};

class B : public A {
protected:
    int y;

public:
    void input(int s) override {  // overriding
        y = s;
    }

    void disp() override {        // overriding
        cout << y << endl;
    }
};

int main() {
    A *p;
    B b1( );

    *p = &b1;      // Base pointer holding derived object
    p->input(10); // Calls Derived version (due to virtual)
    p->disp();    // Calls Derived version

    return 0;
}


// 📌 Key Points on Virtual Functions

// When we make Base class functions virtual,

//1. Compiler checks the object being pointed to, not just the type of pointer.
//2. So if Base pointer points to Derived object → Derived functions will be called.
//3.  Virtual function works only when both Base and Derived class functions have the same name (function overriding).
//4. Virtual concept is applicable for function overriding only (not variables).