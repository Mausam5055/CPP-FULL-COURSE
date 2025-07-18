// 📝 Explanation (in simple words)

//1. We used three area functions with different inputs:
//2. One takes int (for square side)
//3. One takes float (for circle radius)
//4. One takes two float values (for triangle base and height)
//5. This is called function overloading – same function name, different input types.
//6. In main(), we ask the user to enter values, and we call the correct
// function based on the inputs.




#include <iostream>
using namespace std;

// Function to calculate area of square
float area(int side) {
    return side * side; // side × side
}

// Function to calculate area of circle
float area(float radius) {
    return 3.14 * radius * radius; // π × r × r (π is approx 3.14)
}

// Function to calculate area of triangle
float area(float base, float height) {
    return 0.5 * base * height; // ½ × base × height
}

int main() {
    int side;
    float radius, base, height;

    // Square
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << area(side) << endl;

    // Circle
    cout << "\nEnter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    // Triangle
    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height) << endl;

    return 0;
}

//output:
// Enter side of square: 4
// Area of square: 16

// Enter radius of circle: 3
// Area of circle: 28.26

// Enter base and height of triangle: 5 2
// Area of triangle: 5

// ALTERNATIVE EASY METHOD: 

// #include <iostream>
// using namespace std;

// // Global variables for area results
// float squareArea, circleArea, triangleArea, rectangleArea;

// // Area of square
// void area(int side) {
//     squareArea = side * side;
// }

// // Area of circle
// void area(float radius) {
//     circleArea = 3.14 * radius * radius;
// }

// // Area of triangle
// void area(float base, float height) {
//     triangleArea = 0.5 * base * height;
// }

// // Area of rectangle
// void area(int length, int width) {
//     rectangleArea = length * width;
// }

// int main() {
//     // Function calls with direct values
//     area(5);            // Square
//     area(3.2);          // Circle
//     area(6.5, 4.0);     // Triangle
//     area(7, 3);         // Rectangle

//     // Displaying the results
//     cout << "Square Area: " << squareArea << endl;
//     cout << "Circle Area: " << circleArea << endl;
//     cout << "Triangle Area: " << triangleArea << endl;
//     cout << "Rectangle Area: " << rectangleArea << endl;

//     return 0;
// }
