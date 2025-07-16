//There are four types of user defind functions IN Cpp
//1.Function with No Arguments, No Return Value
//2.Function With Arguments, No Return Value
//3.Function No Arguments, Returns a Value
//4.Function With Arguments and Returns a Value

// ✅ What is void in C++?
// In C++, **void** is a keyword that means:

//1.“Nothing” or “No type”
//2. It is used to indicate that a function doesn’t return a 
//value 

// Function with no argument and no return value:
//📌 Function: Takes no input from user and returns nothing.
//👉 It handles everything inside the function.
//NOTE:  we always call  user defined functuion inside the main functioin 

#include <iostream>
using namespace std;

void add() {
    int a = 10, b = 20;
    int sum = a + b;
    cout << "Sum (No arguments, no return): " << sum << endl;
}

int main() {
    add();  //calling the user defind function inside main function
    return 0;  // ✅ Recommended for main(), this return value is different from the 
            // return value of function that we defined and is to written in all codes 
}

//The above can also be written as : 

#include <iostream>
using namespace std;
void add()
int main()

 {
    int a = 10, b = 20;
    int sum = a + b;
    cout << "Sum (No arguments, no return): " << sum << endl;
}
 {
    add();
    return 0;
}

// 🟢 Output:
// Sum (No arguments, no return): 30
