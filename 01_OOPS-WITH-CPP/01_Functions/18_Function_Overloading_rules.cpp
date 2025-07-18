// ✅ Rules for Function Overloading in C++ (Explained Simply)
// Function overloading allows you to use the same function name for 
//different purposes. But to do it correctly, you must follow some 
// important rules.

// 📌 1. Number of Parameters Must Be Different
// You can overload functions in the same code if they take different 
//numbers of arguments.
int add(int a, int b);        // 2 parameters
int add(int a, int b, int c); // 3 parameters ✅ Allowed

// 📌 2. Type of Parameters Must Be Different
// You can overload functions in the same code if they take different 
// data types.
int area(int side);          // Takes int
float area(float radius);    // Takes float ✅ Allowed

// 📌 3. Order of Parameters Can Be Different
// Even if the number is same, the order of parameters can be different.
void print(int a, float b);
void print(float a, int b);  // ✅ Allowed

// ❌ 4. Return Type Alone Cannot Be Different
// If two functions have the same name and parameters, but only the return 
// type is different, it's not allowed.
int area(int side);
float area(int side);   // ❌ Not Allowed (same name, same parameters)

// ✅Final Solution: Change number or types of parameters.



