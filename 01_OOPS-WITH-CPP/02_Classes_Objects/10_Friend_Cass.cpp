//Addition Of Two Different Class Using Friend CLass

#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
    int numA;

public:
    void setData(int a) {
        numA = a;
    }

    // Declare Adder as a friend
    friend class Adder;
};

class ClassB {
    int numB;

public:
    void setData(int b) {
        numB = b;
    }

    // Declare Adder as a friend
    friend class Adder;
};

// Friend class that adds data from ClassA and ClassB
class Adder {
public:
    void add(ClassA objA, ClassB objB) {
        int result = objA.numA + objB.numB;
        cout << "Addition: " << result << endl;
    }
};

int main() {
    ClassA a;
    ClassB b;
    Adder addObj;

    a.setData(10);  // Set value in ClassA
    b.setData(20);  // Set value in ClassB

    addObj.add(a, b); // Add values using Adder class

    return 0;
}

//1. Two classes:
// ClassA has an integer numA.
// ClassB has an integer numB.

//2. Setting values:
// setData() functions set values for each class.

//3. Friend class:
// Adder is declared as a friend in both ClassA and ClassB.
// This gives Adder permission to access the private data (numA and numB).

//4. Adding values:
// The add() function in Adder adds numA + numB and prints the result.