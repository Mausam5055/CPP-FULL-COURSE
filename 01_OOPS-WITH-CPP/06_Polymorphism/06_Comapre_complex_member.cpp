//Comparing Two Complex Numbers Using Binary + Operator Overloading as Friend Function  

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overload == operator (member function)
    bool operator==(Complex c) {
        return (real == c.real && imag == c.imag);
    }
};

int main() {
    Complex c1(3, 4), c2(3, 4), c3(1, 2);

    if (c1 == c2)
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;

    if (c1 == c3)
        cout << "c1 and c3 are equal" << endl;
    else
        cout << "c1 and c3 are not equal" << endl;

    return 0;
}
