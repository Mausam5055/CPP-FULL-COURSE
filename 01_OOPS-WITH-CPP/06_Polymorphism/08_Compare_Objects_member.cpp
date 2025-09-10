//Comparing Two Student Objects Using == Operator Overloading as Member Function

#include <iostream>
using namespace std;

class Student {
    int id;

public:
    Student(int i = 0) {
        id = i;
    }

    // Overload == operator
    bool operator==(Student s) {
        return (id == s.id);
    }
};

int main() {
    Student s1(101), s2(101), s3(102);

    if (s1 == s2)
        cout << "s1 and s2 are equal" << endl;
    else
        cout << "s1 and s2 are not equal" << endl;

    if (s1 == s3)
        cout << "s1 and s3 are equal" << endl;
    else
        cout << "s1 and s3 are not equal" << endl;

    return 0;
}
