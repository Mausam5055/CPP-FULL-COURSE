// 🔸 4.Function  With Arguments and Returns a Value
// 📌 Function: Takes arguments and returns the result.
// 👉 Most flexible and reusable method.

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(30, 45);
    cout << "Sum (With arguments and returns value): " << result << endl;
    return 0;
}

// 🟢 Output:
// Sum (With arguments and returns value): 75