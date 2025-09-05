// 🔹 Solution: Virtual Inheritance
// By making the inheritance virtual, C++ ensures that only one shared 
// copy of A exists, no matter how many times it is inherited.

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A function" << endl;
    }
};

// Notice "virtual"
class B : virtual public A { };

class C : virtual public A { };

class D : public B, public C { };

int main() {
    D obj;
    obj.show();  // ✅ No ambiguity, only one A exists
    return 0;
}


// 🔹 Explanation of virtual in Diamond
//1. When B and C inherit A virtually, the compiler ensures 
// there is only one instance of A in memory.
//2. Now D inherits that single shared A.
//3. No duplication → No ambiguity.

// ✅ Summary:

//1.Hybrid Inheritance = mixture of multiple + hierarchical.
//2.Diamond Problem occurs when a class indirectly inherits 
// from the same base via multiple paths → duplicate copies.
//3. Virtual inheritance solves it by making sure the base class is
//shared (only one copy).