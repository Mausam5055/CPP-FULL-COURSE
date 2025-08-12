//Syntax:
// class name
// {
//     // body of class
//     // destructor
//     ~class name()
//     {
//         // body of destructor
//     }
// };

//Example: 
#include <iostream>
using namespace std;

class A {
    int *x;
public:
    // Dynamic constructor
    A(int x1) {
        x = new int(x1);
    }

    // Destructor
    ~A() {
        delete x;  // free allocated memory
        cout << "Memory freed\n";
    }

    void output() {
        cout << *x << endl;
    }
};

int main() {
    A a1(5);
    a1.output();  // prints 5
} // destructor automatically called here → memory freed


