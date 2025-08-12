// 🔹 Types of Constructors:
//1. Default Constructor(Zero Parametrized constructor)
// Takes no arguments.


Student() {

 }  // Automatically created if you don't define any


//2.Parameterized Constructor
// Takes arguments (and has body) to initialize data members. 


class Student {
    int age;
public:
    Student(int a) {
        age = a;
    }
};

//3. Copy Constructor;
//Creates a copy of an object.


Student(const Student &s) {
    // Copy values from s
}

//4.zero parametrized constructor:(Default constructor only)
// A zero-parameter constructor (also called a default constructor) is a constructor that 
// takes no arguments but has body.
// It is automatically called when you create an object without giving any values.

#include <iostream>
using namespace std;

class Student {
public:
    // Zero-parameter constructor
    Student() {
        cout << "Zero-parameter constructor called!" << endl;
    }
};


//5. Dynamic/Constructor Overloading:
// You can have multiple constructors in one class with different parameters 
// (like function overloading).

