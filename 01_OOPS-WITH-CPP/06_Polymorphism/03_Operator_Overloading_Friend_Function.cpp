// As a Friend Function
// Unary operator → one argument
// Binary operator → two arguments

// ✅ Syntax:

friend return_type operator <symbol>(class_name obj);

//Example: 

class A {
    int n;

public:
    A(int x) { n = x; }

    friend void operator ++ (A &obj);

    void display() {
        cout << "Value of n = " << n << endl;
    }
};

// Friend function definition
void operator ++ (A &obj) {
    obj.n++;
}

int main() {
    A a1(10);
    ++a1;        // Calls friend overloaded ++
    a1.display();
    return 0;
}
