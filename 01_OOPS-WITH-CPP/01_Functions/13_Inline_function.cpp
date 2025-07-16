// ⚡ 2. What is an Inline Function?
// An inline function is a special function in C++ that removes this overhead!
// 🔧 Instead of jumping to another memory location, the compiler replaces the 
// function call with the actual code of the function — directly. 

// 📦 Syntax of Inline Function:

                inline void sayHello() {
                    cout << "Hello!" << endl;
                }


// Now, when you call sayHello() in main(), the compiler replaces it like this:


int main() {
    // Instead of calling sayHello(), it becomes:
    cout << "Hello!" << endl;
    return 0;
}
// ✨ This means:
// 1.No jump
// 2.No stack management
// 3.No return
// Hence, no overhead time!      

//  EXAMPLE:
            #include <iostream>
            using namespace std;

            // ✅📦 This is an inline function.
            // When the compiler sees a call to this function,
            // it will *replace* the function call with this exact code.
            inline void sayHello() {
                cout << "Hello!" << endl;
            }

            int main() {
                // 🧠 This is the actual function call:
                sayHello();

                // 📌 What the compiler does internally (in simple terms):
                // Instead of jumping to the function definition above,
                // it will insert this code directly in this sapce:
                //
                // cout << "Hello!" << endl;
                //
                // So, the final code (in the compiler's eyes) becomes:
                //
                // int main() {
                //     cout << "Hello!" << endl;
                //     return 0;
                // }

                return 0;
            }


// 🧠 Final Idea:
// ✅ Inline function = no jumping, no function overhead
// ✅ The function body is pasted directly wherever it's called
// ✅ Useful when the function is short and simple

// 🟢 Why is this useful?
//1. Faster execution when used in loops or frequently-called small functions.
//2.Cleaner code without repeating the same logic everywhere.
