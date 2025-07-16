// 🧠 1. What is Overhead Time in C++?
// Overhead time refers to the extra time a program takes to call a function.

// When you call a function in C++ (normal function), the system does:
//1. Stores the current execution location (so it can return later).
//2. Jumps to the function code block , where the code is defined within the function
//3. Executes the function.
//4. Comes back to the loacation where function call is made.
//5. All this takes extra time, which is called function call overhead.

#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello!" << endl;
}

int main() {
    sayHello();  // Function call → Overhead involved here
    return 0;
}


// Here, calling sayHello() causes overhead due to:

// Jumping to another memory location(i,e going isnide void sayheelo()- 
//where the function is being defined)
// Coming back again
// Managing the function stack

// 👉 This may seem small, but if you call this function many times, 
//especially in loops, it affects performance.

