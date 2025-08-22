// 🔹 What is a Constructor?
// A constructor is a special tupe of member function defined in the public section that is 
// automatically  called when an object of its associated  class is created.Its special 
// because its name is same as that of the class name.

// Key Points:
    // 1. It Has the same name as the class.
    // 2. Called automatically when the object is created.
    // 3. No return type, not even void.
    // 3. The constructer  automatically calls new and del operator to allocate and deaalocate memory as 
    // 4.per the requirement
    // 5.It cannot be Inherited.
    // 6. It can be overloaded.
    // 7.It cannot be Virtual.


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
