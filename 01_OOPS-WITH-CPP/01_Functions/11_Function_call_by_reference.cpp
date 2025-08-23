// 🟦 3. Call by Reference (C++ only)
// 🔸 What Happens?
// A reference variable is just another name (alias) for the original variable.
// No new memory is used.
// Changes made affect original variables directly.

#include <iostream>
using namespace std;

void swap(int &a, int &b) {  // formal arguments: reference variables
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(x, y);  // actual arguments
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}

// After swap: x = 20, y = 10
// 📉 Disadvantage (Memory):
// Very efficient: no copy, no extra memory.

// But can be dangerous if used incorrectly, since original data is directly affected.

// Only available in C++, not in C.