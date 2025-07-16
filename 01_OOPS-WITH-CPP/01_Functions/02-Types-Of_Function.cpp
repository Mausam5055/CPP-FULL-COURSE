//2.Function With Arguments, No Return Value
// 📌 Function: Accepts values as arguments but doesn't return the result.
// 👉 The result is printed inside the function.

#include <iostream>
using namespace std;

void add(int a, int b) {   //paremeter = int a and b
    int sum = a + b;
    cout << "Sum (With arguments, no return): " << sum << endl;
}

int main() {
    add(15, 25);  //argument is passed to the paramerter
    return 0;
}

// 🟢 Output:
// Sum (With arguments, no return): 40