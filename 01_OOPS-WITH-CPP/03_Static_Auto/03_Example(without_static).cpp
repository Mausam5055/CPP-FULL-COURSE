//Without Using Static Function: 

// 🤔 Without static — What changes?
// Let’s compare:

#include <iostream>
using namespace std;

class Student {
    int count;  // ❌ NOT static anymore
    int rollNumber;

public:
    Student(int r) {
        rollNumber = r;
        count++;  // ⚠️ This now refers to each object’s own 'count'
    }

    void showCount() {
        cout << "Count: " << count << endl;
    }
};

// 🚫 What goes wrong?
// Every object gets its own count.

// So when count++ runs, it only increases that object’s own count, 
// not a shared value.

// The counter won’t actually count all students.
// It stays uninitialized (i.e., garbage value) unless manually set to 0.
// You’ll get wrong outputs, or even random garbage numbers.

// 🔴 Example Output (if count is not static):
// 🔹 Define the static member outside the class



int main() {
Student s1(101);
Student s2(102);
Student s3(103);

s1.showCount();  // Maybe garbage or 1
s2.showCount();  // Maybe garbage or 1
s3.showCount();  // Maybe garbage or 1
}
// Each object has its own separate count, so you don’t get total 
// count across objects.

// ✅ Why static is needed?
// static int count;  // ✅ Shared by all Student objects
// This creates ONE shared count for ALL students.

// So:
// count++ → adds to one common counter.
// Works correctly as a global tracker for the class.

