//Addition Of Two Objects using Friend Member Function

#include <iostream>
using namespace std;

class Add {
    int num;

public:
    void setData(int n) {
        num = n;
    }

    // Declare friend function
    friend void addObjects(Add obj1, Add obj2);
};

// Friend function (outside the class)
void addObjects(Add obj1, Add obj2) {
    int result = obj1.num + obj2.num;
    cout << "Sum = " << result << endl;
}

int main() {
    Add a1, a2;

    a1.setData(15);  // Object 1 value
    a2.setData(25);  // Object 2 value

    addObjects(a1, a2); // Call friend function

    return 0;
}
 
// 🔍 Explanation:

// 1.Class Add has a private variable num.
// 2.Two objects, a1 and a2, are created.
// 3.Friend function addObjects() is declared inside the class but defined outside.
// 4.This friend function can access num of both objects because it's a friend.
// 5.It adds a1.num + a2.num and prints the result.