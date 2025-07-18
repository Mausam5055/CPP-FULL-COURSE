       // FUNCTION OVERLOADING

// Function overloading means using the same function name to perform 
//different tasks based on the number or type of inputs (parameters).

// The compiler automatically decides which version of the function to call, 
//depending on the arguments you pass.

// 🔍 Why Use Function Overloading?
// It makes your code:
// Cleaner and easier to read.
// More organized because you don’t need different names for similar functions.

// 🧠 Think of It Like This:
// You have one remote that controls:
// 📺 a TV with 1 button press
// 🎧 a music system with 2 button presses
// 💡 lights with a different type of signal

// Even though it's the same remote (function name), it does different things
// depending on how you use it (inputs).

#include <iostream>
using namespace std;

// 1. Function to add two integers
int add(int a, int b) {
    return a + b;
}

// 2. Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// 3. Function to add two floats
float add(float x, float y) {
    return x + y;
}

int main() {
    cout << add(2, 3) << endl;       // Calls the 1st function → output: 5
    cout << add(1, 2, 3) << endl;    // Calls the 2nd function → output: 6
    cout << add(1.5f, 2.5f) << endl; // Calls the 3rd function → output: 4.0
    return 0;
}
