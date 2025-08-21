//Addition Of Two Different Class Using Friend CLass

##include <iostream>
using namespace std;

// Forward declaration
class ClassB;

class ClassA {
    int num1;
public:
    ClassA(int n) { num1 = n; }
    // Declare friend class
    friend class AddNumbers;
};

class ClassB {
    int num2;
public:
    ClassB(int n) { num2 = n; }
    // Declare friend class
    friend class AddNumbers;
};

// Friend class
class AddNumbers {
public:
    void add(ClassA a, ClassB b) {
        cout << "Sum = " << (a.num1 + b.num2) << endl;
    }
};

int main() {
    ClassA obj1(10);
    ClassB obj2(20);

    AddNumbers adder;
    adder.add(obj1, obj2);

    return 0;
} Adder adds numA + numB and prints the result.
