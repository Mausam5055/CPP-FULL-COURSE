// 🧠 Final Tip:

// You can remember them like this:
// 🍼 Default = No info, so give basic setup.
// 🎯 Parameterized = You tell what to do.
// 📋 Copy = Just clone another object.

#include <iostream>
using namespace std;

class Student {
    int age;

public:
    // 1️⃣ Default (zero-parameter) constructor
    Student() {
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    // 2️⃣ Parameterized constructor
    Student(int a) {
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // 3️⃣ Copy constructor
    Student(const Student &s) {
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;           // Calls default constructor
    Student s2(20);       // Calls parameterized constructor
    Student s3 = s2;      // Calls copy constructor

    cout << "\nDisplaying all student ages:" << endl;
    s1.display();
    s2.display();
    s3.display();

    return 0;
}


// Default constructor called!
// Parameterized constructor called!
// Copy constructor called!

// Displaying all student ages:
// Age: 0
// Age: 20
// Age: 20
