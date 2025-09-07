// Definition
// 👉 Operator overloading means giving a new meaning to an existing operator so that it
// can also work with user-defined data types in the same way as it works with built-in 
// data types.

// Unary Operator Overloading:

// 👉 Example: Increment Operator ++
// 👉 We can define an operator in two ways:
//1. As a member function
//2. As a friend function

                // As a Member Function
                // Unary operator → zero arguments
                // Binary operator → one argument

// ✅ Syntax:

return_type operator <symbol>() {
    // Operator logic
}

// ✅ Example:

class A {
    int n;

public:
    A(int x) { n = x; }

    // Overloading ++
    void operator ++ () {
        n++;
    }

    void display() {
        cout << "Value of n = " << n << endl;
    }
};

int main() {
    A a1(5);
    ++a1;        // Calls overloaded ++
    a1.display();
    return 0;
}
