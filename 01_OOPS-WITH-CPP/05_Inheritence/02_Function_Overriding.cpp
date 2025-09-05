#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    char name[20];
    int roll;

public:
    void input() {   // Base class version
        cout << "Enter Student details (Name Roll): ";
        cin >> name >> roll;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

// Derived class
class Result : public Student {
protected:
    int m1, m2, m3;

public:
    // Derived class overrides input()
    void input() {
        cout << "Enter Student details with marks (Name Roll m1 m2 m3): ";
        cin >> name >> roll >> m1 >> m2 >> m3;
    }

    void displayResult() {
        int total = m1 + m2 + m3;
        cout << "\n--- Result ---\n";
        displayStudent(); // call base class function
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total: " << total << endl;
    }
};

// Main function
int main() {
    Result r;

    // This calls the derived version (overriding base version)
    r.input();

    r.displayResult();

    return 0;
}
