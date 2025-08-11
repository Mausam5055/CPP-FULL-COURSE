// So, What is auto in C++?
// auto is a keyword that tells the compiler to automatically detect the type 
// of a variable.

auto a = 5;       // compiler makes it int
auto b = 3.14;    // compiler makes it double
auto c = "hello"; // compiler makes it const char*

// Introduced properly in C++11.
// Used for local variables, not for class data members.

// 🔸 Default Storage Class in Functions: auto
// When you write:

void example() {
    int x = 10;
}

// Here, x is by default an auto variable — it is stored in the stack, has a local
// scope, and is destroyed when the function ends.

// Writing this:


auto x = 10;

// ...is the same as writing:
int x = 10;

// Because the compiler auto-detects the type.