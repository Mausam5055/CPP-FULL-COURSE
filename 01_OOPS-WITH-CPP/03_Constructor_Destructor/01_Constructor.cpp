// 🔹 What is a Constructor?
// A constructor is a special function that is automatically 
//called when an object of a class is created. It is used to 
//initialize the object.

// Key Points:
// Has the same name as the class.
// No return type, not even void.
// Called automatically when the object is created.

#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called!" << endl;
    }
};

int main() {
    Student s1;  // Constructor is automatically called
    return 0;
}
