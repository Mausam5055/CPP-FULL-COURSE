//Comparing Two Student Objects Using == Operator Overloading as Friend Function

#include <iostream>
using namespace std;

class Student {
    int id;

public:
    Student(int i = 0) {
        id = i;
    }

    // Friend function for ==
    friend bool operator==(Student s1, Student s2);
};

// Definition
bool operator==(Student s1, Student s2) {
    return (s1.id == s2.id);
}

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
