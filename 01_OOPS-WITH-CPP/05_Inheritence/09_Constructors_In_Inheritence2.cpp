// 2. Constructors in Inheritance
// If a base class has a default constructor, it is automatically 
// called when creating an object of the derived class.
// But if a base class has a parameterized constructor, 
// it does not get called automatically.
// The derived class constructor must explicitly call it.

// ⚡ Important Points:
//1. Default constructor of the base class → invoked automatically.
//2. Parameterized constructor of the base class → must be explicitly 
// called from derived class constructor.
//3. Constructors cannot be inherited. They must be explicitly invoked in 
// derived classes.
//4. In a diamond structure, when using virtual inheritance, the most 
// derived class is responsible for calling the constructor of the topmost base class.

#include <iostream>
using namespace std;

// Base class
class A {
public:
    int x;
    // Parameterized constructor
    A(int val) {
        x = val;
        cout << "Base class A constructor called with value: " << x << endl;
    }
};

// Derived class
class D : public A {
protected:
    int y;
public:
    // Constructor of derived class D explicitly calls base class constructor
    D(int val1, int val2) : A(val1) {  
        y = val2;
        cout << "Derived class D constructor called with value: " << y << endl;
    }

    void display() {
        cout << "Values: x = " << x << ", y = " << y << endl;
    }
};

int main() {
    // Create object of derived class
    D obj(3, 4);  // Calls A(3) first, then D(3,4)
    obj.display();
    return 0;
}


//1.A has a parameterized constructor.
//2. D must explicitly call A’s constructor inside its own initializer list.
//3. First, base class constructor runs, then derived class constructor runs.