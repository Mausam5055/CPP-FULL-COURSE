// 🟨 2. Call by Address (using pointers)
// 🔸 What Happens?
// The addresses of variables are passed.
// The function accesses and modifies original variables using pointers.
// 📘 Code Example:

#include <iostream>
using namespace std;

void swap(int* a, int* b) {  // formal arguments: pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);  // actual arguments: address of x and y
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}




//  Disadvantage (Memory):
// Extra memory for pointer variables, but no copy of actual values—more 
//efficient than call by value.

// Slightly more complex due to pointer usage.
// Risk of invalid memory access if wrong address is passed.

