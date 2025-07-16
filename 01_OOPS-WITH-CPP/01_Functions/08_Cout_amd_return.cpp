//  Use return when:
// You need to store, compare, or reuse the output.
//  Use cout when:
//  You only need to display a message or result.

include <iostream>
using namespace std;

// Function that returns the sum of two numbers
int add(int a, int b) {
    return a + b;  // Returns the result to main()
}

int main() {
    int x = 10;
    int y = 20;

    // Store the returned value in a variable
    int result = add(x, y);

    // after printing the result cant be used later 
    cout << "Sum is: " << result << endl;

    // Example: use the result in another calculation
    int doubleSum = result * 2;
    cout << "Double of the sum is: " << doubleSum << endl;

    return 0;
}
