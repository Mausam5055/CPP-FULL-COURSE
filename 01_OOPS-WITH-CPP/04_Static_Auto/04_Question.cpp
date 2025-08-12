#include <iostream>
using namespace std;

class Item {
    static int count;  // 🔹 Shared variable (common for all objects)
    int number;        // 🔸 Unique variable (different for each object)

public:
    // 🔸 Function to set data and increase shared count
    void getData(int a) {
        number = a;
        count++;  // Increase static count each time data is set
    }

    // 🔹 Function to show the current shared count
    void showCount() {
        cout << "Count: " << count << endl;
    }

    // 🔸 Function to show the object's own number
    void showNumber() {
        cout << "Number: " << number << endl;
    }
};

// 🔹 Define the static variable outside the class (required in C++)
int Item::count = 0;

int main() {
    // 🔸 Create three objects
    Item a, b, c;

    // 🔸 Show count before setting any data
    cout << "Before setting data:" << endl;
    a.showCount();
    b.showCount();
    c.showCount();

    // 🔹 Set data for each object (this also increases static count)
    a.getData(100);
    b.getData(200);
    c.getData(300);

    // 🔸 Show the shared count again
    cout << "\nAfter setting data:" << endl;
    a.showCount();
    b.showCount();
    c.showCount();

    // 🔸 Show individual numbers
    cout << "\nIndividual Numbers:" << endl;
    a.showNumber();
    b.showNumber();
    c.showNumber();

    return 0;
}


// Before setting data:
// Count: 0       // Static variable is 0 initially
// Count: 0       // Still 0, shared value
// Count: 0       // Same shared value

// After setting data:
// Count: 3       // After 3 getData() calls, count incremented 3 times
// Count: 3       // Static variable is shared, so all show the same value
// Count: 3       // Still 3

// Individual Numbers:
// Number: 100    // Unique to object 'a'
// Number: 200    // Unique to object 'b'
// Number: 300    // Unique to object 'c'
