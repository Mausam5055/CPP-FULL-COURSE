// Dynamic Constructor:

// A dynamic constructor is a constructor in C++ that allocates memory 
// dynamically at run time to the data members of a class. This allows the 
// program to decide the memory requirements while it is running, not at 
// compile time.

// Definition from my notes:
// A constructor that can allocate memory dynamically at run time to 
//the  data members is known as a dynamic constructor.

#include <iostream>
using namespace std;

class A {
    int *x; // pointer to store dynamically allocated int
public:
    A(int x1) {
        x = new int(x1); // dynamically allocate memory & store value
    }

    void output() {
        cout << *x; // display the value stored in allocated memory
        delete x;   // deallocate the memory space
    }
};

int main() {
    A a1(5);      // create object, calls constructor with 5
    a1.output();  // prints 5 and frees memory
    return 0;
}


//1.Pointer member variable
// int *x; means we store the address of dynamically allocated memory.

//2. Dynamic memory allocation inside constructor
// x = new int(x1); allocates memory in the heap for an integer and 
// initializes it with x1.

//3.Output function
// cout << *x; prints the value stored at the allocated memory.
// delete x; frees the allocated memory to prevent memory leaks.

//4. Main function
// A a1(5); → calls the constructor, allocates memory, and stores value 5.
// a1.output(); → prints 5 and deletes allocated memory.