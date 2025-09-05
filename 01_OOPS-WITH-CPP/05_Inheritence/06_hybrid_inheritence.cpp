// 🔹 Hybrid Inheritance

// Hybrid inheritance = combination of multiple and hierarchical inheritance.
// Example: A child class inherits from more than one parent, and those parents 
// might themselves be inherited from a common base.

#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

// B inherits from A (hierarchical)
class B : public A {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};

// C also inherits from A (hierarchical)
class C : public A {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};

// D inherits from C (mixing multiple + hierarchical, but no diamond)
class D : public C {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D obj;
    
    obj.displayA(); // From A
    obj.displayC(); // From C
    obj.displayD(); // From D
    // obj.displayB(); ❌ Not accessible, since D is not inheriting from B

    return 0;
}


// 🔹 Key Points

// This is hybrid because:
//1. B and C both inherit from A (hierarchical).
//2. D inherits from C (simple single inheritance).
//3. Together → forms a hybrid structure.
//✅ No diamond problem here because D doesn’t inherit 
// from both B and C.