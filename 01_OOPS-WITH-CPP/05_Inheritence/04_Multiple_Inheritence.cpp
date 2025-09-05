#include <iostream>
using namespace std;

// --- Base Class 1 ---
class student {
protected:
    char name[20];
    int Roll;

public:
    // This function gets student details
    void input() {
        cout << "Enter name and Roll Number: ";
        cin >> name >> Roll;
    }
};

// --- Base Class 2 ---
class sports {
protected:
    int score;

public:
    // This function gets the sports score
    void input() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

// --- Derived Class from BOTH student and sports ---
class Result : public student, public sports {
public:
    void display() {
        cout << "\n--- Combined Student Report ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << Roll << endl;
        cout << "Sports Score: " << score << endl;
    }
};

// --- Main function to run the program ---
int main() {
    // Create an object of the Result class
    Result R1;

    cout << "--- Data Entry ---" << endl;

    // Call the input() function from the 'student' class
    R1.student::input();

    // Call the input() function from the 'sports' class
    R1.sports::input();

    // Display the final, combined information
    R1.display();

    return 0;
}

// How this Code Works
// Multiple Inheritance: The Result class inherits the members name and Roll from student, and score from sports.

// Ambiguity Resolution: Both student and sports have a function named input(). To avoid a compiler error, 
// the main function explicitly states which parent's input() to use: R1.student::input() and R1.sports::input().

// Display: The display() function in the Result class has access to all the protected members from both parent 
// classes and can print them out.