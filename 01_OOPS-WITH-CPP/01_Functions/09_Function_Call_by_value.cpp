// 📌 1. Call by Value
// What happens: The function gets a copy of the actual variables (i.e a and b here).
// Changes made inside the function DO NOT affect the original variables.

#include <iostream>
using namespace std;

void swap(int a, int b) { // formal arguments
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function: a=" << a << " b=" << b << endl;
}

int main() {
    int x = 5, y = 10; // actual arguments
    swap(x, y);
    cout << "After function call: x=" << x << " y=" << y << endl;
}

// Inside function: a = 20, b = 10
// Outside function: x = 10, y = 20
//here we cant store the value and it is of no use as well, so we use function 
// with no retun value 

// 📉 Disadvantage (Memory):
// Extra memory is used to create copies of x and y.
// Changes are made only on copies, not originals.



