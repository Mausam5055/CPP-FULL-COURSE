#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    char name[20];
    int roll;
};

// Derived class
class Result : public Student {
protected:
    int m1, m2, m3;

public:
    void input() {
        cout << "Enter details (Name Roll m1 m2 m3): ";
        cin >> name >> roll >> m1 >> m2 >> m3;
    }

    void displayResult() {
        int total = m1 + m2 + m3;
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total: " << total << endl;
    }
};

// Main function
int main() {
    Result r;
    r.input();
    r.displayResult();
    return 0;
}
