//  3.Function with No Arguments, Returns a Value
// 📌 Function: Doesn't take arguments but returns the result.
// 👉 Useful when input is taken inside function and result is needed 
//in main().

#include <iostream>
using namespace std;

int add() {
    int a = 5, b = 7;
    return a + b; // retun value (which can be used later)
}
int main() {
    int result = add();  // the resuilt is stored for future purpose ,which 
                         // is not possible with cout
    cout << "Sum (No arguments, returns value): " << result << endl;
    return 0;
}


// 🟢 Output:
// Sum (No arguments, returns value): 12

