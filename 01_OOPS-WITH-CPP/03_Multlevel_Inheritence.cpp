#include <iostream>
using namespace std;

// LEVEL 1: The 'Grandparent' (Base) Class
class Student {
protected:
    int roll_number;

public:
    void get_roll_number() {
        cout << "Enter Roll Number: ";
        cin >> roll_number;
    }
};

// LEVEL 2: The 'Parent' (Intermediate) Class
// It inherits from Student.
class Test : public Student {
protected:
    int marks1, marks2;

public:
    void get_marks() {
        cout << "Enter marks for two subjects: ";
        cin >> marks1 >> marks2;
    }
};

// LEVEL 3: The 'Child' (Derived) Class
// It inherits from Test, which already has Student's features.
class Result : public Test {
public:
    void display_result() {
        // Can access 'roll_number' from Student (Level 1)
        // Can access 'marks1' and 'marks2' from Test (Level 2)
        int total = marks1 + marks2;

        cout << "\n--- Final Marksheet ---" << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Total Marks: " << total << endl;
    }
};

// --- Main function to run the code ---
int main() {
    // Create an object of the final class in the chain
    Result student1;

    // This single object can call functions from all its parent classes
    student1.get_roll_number(); // Function from Student class
    student1.get_marks();      // Function from Test class
    student1.display_result(); // Function from its own class

    return 0;
}