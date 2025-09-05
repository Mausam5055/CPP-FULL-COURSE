// Example without Virtual 

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A function" << endl;
    }
};

class B : public A { };

class C : public A { };

class D : public B, public C { };

int main() {
    D obj;
    // obj.show();  // ❌ ERROR: Ambiguous, from B::A or C::A?
    obj.B::show();  // ✅ Explicitly call via B
    obj.C::show();  // ✅ Explicitly call via C
    return 0;
}
