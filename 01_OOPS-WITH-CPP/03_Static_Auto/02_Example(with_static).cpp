// Using Static function:

#include <iostream>
using namespace std;

class Student {
    static int count;   // 🔹 Shared by all objects(static data members)
    int rollNumber;     // 🔸 Unique for each student

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

