// Nesting of Classes (Composition)

// A class can contain objects of other classes as its data members.
// This is called nesting of classes or composition.

// It is different from inheritance: instead of "is-a" relation, here we 
// get a "has-a" relation.

// 👉 Example:
// class c contains objects of class a and class b.
// This allows class c to use the functionality of class a and class b.

#include <iostream>
using namespace std;

// Base class a
class a {
private:
    int x;
public:
    void input() {
        cout << "Enter value of x: ";
        cin >> x;
        cout << "Value stored in class a: " << x << endl;
    }
};

// Base class b
class b {
private:
    int y;
public:
    void input() {
        cout << "Enter value of y: ";
        cin >> y;
        cout << "Value stored in class b: " << y << endl;
    }
};

// Derived-like class c (contains objects of a and b)
class c {
    a a1;   // object of class a
    b b1;   // object of class b
public:
    void input() {
        cout << "--- Inside class c ---" << endl;
        a1.input();   // call input() of class a
        b1.input();   // call input() of class b
    }
};

int main() {
    c obj;      // object of class c
    obj.input();// calls input() of a and b
    return 0;
}


//output:
// --- Inside class c ---
// Enter value of x: 10
// Value stored in class a: 10
// Enter value of y: 20
// Value stored in class b: 20

// ✅ This is exactly what your notebook code is showing, just in a fixed
// and refined way:

// 1.class a and class b are base/independent classes.
// 2.class c contains objects of both (a1 and b1).
// 3.By calling obj.input() on c, it internally calls a1.input() 
// and b1.input().
