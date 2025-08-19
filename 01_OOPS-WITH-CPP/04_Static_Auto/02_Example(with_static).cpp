// Using Static function:

#include <iostream>
using namespace std;

class Student {
    int rollNumber;     // 🔸 Unique for each student
    static int count;   // 🔹 Shared by all objects(static data members)

public:
    // ✅ Constructor called automatically when object is created
    Student(int r) {
        rollNumber = r;
        count++;  // Increase total student count
    }

    // Show student roll number
    void showStudent() {
        cout << "Roll Number: " << rollNumber << endl;
    }

    // Show total number of students created
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// 🔹 Define the static member outside the class
int Student::count = 0;

int main() {
    // 👨‍🎓 Create student objects
    Student s1(101);
    Student s2(102);
    Student s3(103);

    // 👀 Show student info
    s1.showStudent();
    s2.showStudent();
    s3.showStudent();

    // 📊 Show total student count
    Student::showCount();  // Calling static function using class name

    return 0;
}


// 🧾 Output:
// Roll Number: 101
// Roll Number: 102
// Roll Number: 103
// Total Students: 3

// Student(int r) is the constructor of the Student class that takes an 
// integer parameter r.

// Here’s the breakdown:

// Student → The name of the constructor is exactly the same as the class name, 
// meaning it’s not a normal function but a special one.
// (int r) → This means the constructor takes one parameter of type int and 
// stores it in a variable named r.

// Purpose → A constructor runs automatically when you create an object of 
// the class.

// Example:
// Student s1(101); // Calls Student(int r) with r = 101
// In this case:

// 1. rollNumber = r; assigns the given value to the object's rollNumber 
// variable.

// 2. count++; increments a (probably static) counter of how many Student 
//objects exist.

// 3. So Student(int r) is a parameterized constructor — it lets you set the 
// student’s roll number at the moment you create the object.




