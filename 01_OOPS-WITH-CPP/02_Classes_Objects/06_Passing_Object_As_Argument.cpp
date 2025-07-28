// Passing object as an argument in member function to add two object
#include <iostream>
using namespace std;

class Add {
    int num;

public:
    void input(int n) {
        num = n;
    }

    void output() {
        cout << "Result: " << num << endl;
    }

    void add(Add a1, Add a2) {
        num = a1.num + a2.num;
    }
};

int main() {
    Add a1, a2, a3;

    // Input values
    a1.input(50);
    a2.input(70);

    // Add objects a1 and a2, store in a3
    a3.add(a1, a2);

    // Output result
    a3.output();

    return 0;
}
