#include <iostream>
using namespace std;

class Add {
    int num;  // private variable

public:
    // To assign value to num
    void input(int n) {
        num = n;
    }

    // To display the result
    void output() {
        cout << "Result: " << num << endl;
    }

    // Declare friend function
    friend Add addObjects(Add a1, Add a2);
};

// Friend function definition (outside the class)
Add addObjects(Add a1, Add a2) {
    Add temp;  // Create a new object to store the result
    temp.num = a1.num + a2.num;
    return temp;
}

int main() {
    Add a1, a2, a3;

    a1.input(40);   // a1.num = 40
    a2.input(60);   // a2.num = 60

    // Call the friend function to add objects
    a3 = addObjects(a1, a2);

    // Output the result
    a3.output();  // Output: Result: 100

    return 0;
}