// ======================================================================================================
// CONSTRUCTORS IN INHERITANCE IN C++
// ======================================================================================================

// ==========================================================================================
// 1. BASIC CONCEPT
// ==========================================================================================

/*
1.1 CONSTRUCTOR CALL ORDER:
    - In inheritance, constructors are called in a top-to-bottom manner (Parent to Child)
    - Destructors are called in reverse order (Child to Parent)
    - Base class constructor is automatically called before derived class constructor
*/

// ==========================================================================================
// 2. SIMPLE INHERITANCE EXAMPLE
// ==========================================================================================

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // 2.1 Default constructor
    Base() {
        cout << "1. Base class default constructor called" << endl;
    }
    
    // 2.2 Parameterized constructor
    Base(int x) {
        cout << "2. Base class parameterized constructor called with value: " << x << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // 2.3 Default constructor
    Derived() {
        cout << "3. Derived class default constructor called" << endl;
    }
    
    // 2.4 Parameterized constructor
    Derived(int y) {
        cout << "4. Derived class parameterized constructor called with value: " << y << endl;
    }
};

// ==========================================================================================
// 3. VIRTUAL BASE CLASS CONSTRUCTOR CALL
// ==========================================================================================

/*
3.1 VIRTUAL INHERITANCE:
    - When using virtual inheritance, virtual base class constructors are called first
    - Order of constructor calls:
        1. Virtual base classes (left to right, depth-first)
        2. Non-virtual base classes (left to right)
        3. Derived class constructor
*/

// ==========================================================================================
// 4. CONSTRUCTOR CALL WITH PARAMETERS
// ==========================================================================================

// Base class with parameterized constructor
class Parent {
public:
    // 4.1 Constructor with parameter
    Parent(int a) {
        cout << "5. Parent class constructor called with value: " << a << endl;
    }
};

// Child class
class Child : public Parent {
public:
    // 4.2 Child constructor must explicitly call parent constructor
    Child(int x, int y) : Parent(x) {  // Explicitly calling parent constructor
        cout << "6. Child class constructor called with values: " << x << ", " << y << endl;
    }
};

// ==========================================================================================
// 5. MULTIPLE INHERITANCE CONSTRUCTOR CALL
// ==========================================================================================

// First base class
class Base1 {
public:
    // 5.1 First base class constructor
    Base1() {
        cout << "7. Base1 class constructor called" << endl;
    }
};

// Second base class
class Base2 {
public:
    // 5.2 Second base class constructor
    Base2() {
        cout << "8. Base2 class constructor called" << endl;
    }
};

// Derived class inheriting from multiple base classes
class MultiDerived : public Base1, public Base2 {
public:
    // 5.3 Multiple inheritance constructor call
    MultiDerived() {
        cout << "9. MultiDerived class constructor called" << endl;
    }
};

// ==========================================================================================
// 6. ORDER OF CONSTRUCTOR EXECUTION
// ==========================================================================================

/*
6.1 EXECUTION ORDER RULES:
    1. Virtual base classes (in declaration order)
    2. Direct base classes (in declaration order)
    3. Member objects (in declaration order)
    4. Derived class constructor
*/

// Example demonstrating order
class A {
public:
    A() { cout << "10. Class A constructor" << endl; }
};

class B {
public:
    B() { cout << "11. Class B constructor" << endl; }
};

class C {
public:
    C() { cout << "12. Class C constructor" << endl; }
};

class D : public A, public B {
private:
    C obj;  // Member object
    
public:
    D() { cout << "13. Class D constructor" << endl; }
};

// ==========================================================================================
// 7. PRACTICAL EXAMPLE WITH ALL CONCEPTS
// ==========================================================================================

// Vehicle base class
class Vehicle {
protected:
    string brand;
    
public:
    // 7.1 Base class constructor
    Vehicle(string b) : brand(b) {
        cout << "14. Vehicle constructor called for brand: " << brand << endl;
    }
};

// Engine class
class Engine {
protected:
    int horsepower;
    
public:
    // 7.2 Engine constructor
    Engine(int hp) : horsepower(hp) {
        cout << "15. Engine constructor called with horsepower: " << horsepower << endl;
    }
};

// Car class inheriting from Vehicle and containing Engine
class Car : public Vehicle {
private:
    Engine engine;  // Member object
    
public:
    // 7.3 Car constructor calling parent constructors
    Car(string brand, int hp) : Vehicle(brand), engine(hp) {
        cout << "16. Car constructor completed for " << brand << " with " << hp << "hp" << endl;
    }
};

// ==========================================================================================
// 8. MAIN FUNCTION - DEMONSTRATING ALL EXAMPLES
// ==========================================================================================

int main() {
    cout << "=== CONSTRUCTORS IN INHERITANCE EXAMPLES ===" << endl << endl;
    
    cout << "1. SIMPLE INHERITANCE:" << endl;
    Derived d1;  // Calls Base() then Derived()
    cout << endl;
    
    cout << "2. PARAMETERIZED CONSTRUCTOR INHERITANCE:" << endl;
    Child c1(10, 20);  // Calls Parent(10) then Child(10, 20)
    cout << endl;
    
    cout << "3. MULTIPLE INHERITANCE:" << endl;
    MultiDerived md;  // Calls Base1(), Base2(), then MultiDerived()
    cout << endl;
    
    cout << "4. ORDER OF EXECUTION:" << endl;
    D d2;  // Shows order: A(), B(), C(), D()
    cout << endl;
    
    cout << "5. COMPLETE EXAMPLE:" << endl;
    Car myCar("Toyota", 150);  // Shows complete constructor chaining
    cout << endl;
    
    return 0;
}