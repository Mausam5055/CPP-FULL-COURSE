// Q:Scenario 1: Custom String Class
// You are creating a custom string class that provides additional functionality 
// beyond the standard `std::string` class. You want to overload the `+` operator 
// to concatenate strings and the `==` operator to compare strings. How would you 
// implement these operator overloads?


//  Scenario 1: Custom String Class

// We want:

//1. + → concatenate two strings.
//2. == → check equality.


#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;
    int length;

public:
    // Constructor
    MyString(const char* s = "") {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    // Copy constructor
    MyString(const MyString& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Overload + (concatenate)
    MyString operator+(const MyString& rhs) const {
        int newLen = length + rhs.length;
        char* newStr = new char[newLen + 1];
        strcpy(newStr, str);
        strcat(newStr, rhs.str);

        MyString result(newStr);
        delete[] newStr;
        return result;
    }

    // Overload == (compare)
    bool operator==(const MyString& rhs) const {
        return strcmp(str, rhs.str) == 0;
    }

    // Utility to print
    void display() const {
        std::cout << str << std::endl;
    }
};

// Example usage
int main() {
    MyString s1("Hello");
    MyString s2(" World");
    MyString s3 = s1 + s2;

    s3.display(); // Output: Hello World

    if (s1 == MyString("Hello")) {
        std::cout << "Strings are equal!" << std::endl;
    }
    return 0;
}
