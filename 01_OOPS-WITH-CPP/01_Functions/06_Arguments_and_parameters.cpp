// 🎯 What is an Argument in C++?
// In C++, an argument is the actual value you pass to a 
//function when you call it.
// It’s different from a parameter, which is the placeholder 
//in the function definition.

//✅ Can you use arguments without parameters?
// ❌ No. You cannot write or pass arguments to a function if it 
// doesn't have parameters.

// 📌 Example:
// Let's revisit this function from our previous discussion:

#include <iostream>
using namespace std;

int add(int x, int y) {   // x and y are **parameters**
    return x + y;
}

int main() {
    int a = 10, b = 20;
    int result = add(a, b);  // a and b are **arguments**
    cout << "Sum: " << result << endl;
}

//💡 Think of it like this:
// Parameters are like empty containers.
// Arguments are the real things you pour into them when calling 
//the function.