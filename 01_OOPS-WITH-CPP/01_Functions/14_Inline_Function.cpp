// 🔁 Example with Inline Swap:

#include <iostream>
using namespace std;

inline void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);  // No overhead, code is directly inserted
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
// ✔️ No time is wasted calling the function — swap code is written inside main() directly.

