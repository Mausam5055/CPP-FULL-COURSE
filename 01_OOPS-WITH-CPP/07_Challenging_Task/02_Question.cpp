// Q:2  Scenario 2: Matrix Operations
// You are developing a matrix library that performs matrix operations. You need to 
// overload the `+` and `-` operators to perform matrix addition and subtraction. 
// Additionally, you want to overload the `*` operator for matrix multiplication. 
// How would you implement these operator overloads?

//  Scenario 2: Matrix Operations
// We want:
// + → element-wise addition.
// - → element-wise subtraction.
// * → matrix multiplication (not element-wise!).

#include <iostream>
#include <vector>

class Matrix {
private:
    int rows, cols;
    std::vector<std::vector<int>> data;

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<int>(c, 0)) {}

    // Set value
    void set(int r, int c, int val) {
        data[r][c] = val;
    }

    // Display
    void display() const {
        for (const auto& row : data) {
            for (int val : row) std::cout << val << " ";
            std::cout << "\n";
        }
    }

    // Overload + (addition)
    Matrix operator+(const Matrix& rhs) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + rhs.data[i][j];
            }
        }
        return result;
    }

    // Overload - (subtraction)
    Matrix operator-(const Matrix& rhs) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] - rhs.data[i][j];
            }
        }
        return result;
    }

    // Overload * (matrix multiplication)
    Matrix operator*(const Matrix& rhs) const {
        Matrix result(rows, rhs.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < rhs.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * rhs.data[k][j];
                }
            }
        }
        return result;
    }
};

// Example usage
int main() {
    Matrix A(2, 2), B(2, 2);
    A.set(0, 0, 1); A.set(0, 1, 2);
    A.set(1, 0, 3); A.set(1, 1, 4);

    B.set(0, 0, 5); B.set(0, 1, 6);
    B.set(1, 0, 7); B.set(1, 1, 8);

    Matrix C = A + B;
    std::cout << "A + B:\n"; C.display();

    Matrix D = A - B;
    std::cout << "A - B:\n"; D.display();

    Matrix E = A * B;
    std::cout << "A * B:\n"; E.display();

    return 0;
}
