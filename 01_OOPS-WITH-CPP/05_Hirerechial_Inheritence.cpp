/*
Q. Imagine a university's staff management system. The base class `staff` holds common information like `id` and `name`.

1.  **Hierarchical Inheritance:**
    *   Create a `teacher` class that inherits from `staff` and adds `subject` and `publication`.
    *   Create an `officer` class that inherits from `staff` and adds `grade`.
    *   Create a `typist` class that inherits from `staff` and adds `speed`.

2.  **Multilevel Inheritance:**
    *   Create a `regular` typist class that inherits from `typist` and adds `salary`.
    *   Create a `casual` typist class that inherits from `typist` and adds `daily_wages`.

3.  **Implementation:**
    *   Implement methods to get and display information for each class.
    *   In the `main` function, create a menu-driven program that allows the user to create and display records for a teacher, an officer, a regular typist, and a casual typist.
*/

#include <iostream>
#include <string> // Using string for easier name handling
#include <limits> // Required for numeric_limits
using namespace std;

// LEVEL 1: The Base Class
class staff {
protected:
    int id;
    string name;

public:
    void get_info() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore(); // Clears the input buffer before taking string input
        getline(cin, name);
    }

    void display_info() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

// --- HIERARCHICAL INHERITANCE ---
// All these classes inherit directly from 'staff'

// DERIVED CLASS 1
class teacher : public staff {
private:
    string subject;
    string publication;

public:
    void get_details() {
        cout << "\nEntering Teacher Details..." << endl;
        get_info(); // Call base class function
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Publication: ";
        getline(cin, publication);
    }

    void display_details() {
        cout << "\n--- Teacher Information ---" << endl;
        display_info(); // Call base class function
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl;
    }
};

// DERIVED CLASS 2
class officer : public staff {
private:
    char grade;

public:
    void get_details() {
        cout << "\nEntering Officer Details..." << endl;
        get_info();
        cout << "Enter Grade (A, B, C): ";
        cin >> grade;
    }

    void display_details() {
        cout << "\n--- Officer Information ---" << endl;
        display_info();
        cout << "Grade: " << grade << endl;
    }
};

// DERIVED CLASS 3 (This one is also part of a multilevel chain)
class typist : public staff {
protected:
    int speed; // words per minute

public:
    void get_speed() {
        get_info(); // Get common staff info first
        cout << "Enter Typing Speed (wpm): ";
        cin >> speed;
    }

    void display_speed() {
        display_info(); // Display common staff info
        cout << "Typing Speed: " << speed << " wpm" << endl;
    }
};

// --- MULTILEVEL INHERITANCE ---
// These classes inherit from 'typist'

// LEVEL 3, DERIVED from typist
class regular : public typist {
private:
    float salary;

public:
    void get_details() {
        cout << "\nEntering Regular Typist Details..." << endl;
        get_speed(); // Call parent class function
        cout << "Enter Monthly Salary: ";
        cin >> salary;
    }

    void display_details() {
        cout << "\n--- Regular Typist Information ---" << endl;
        display_speed(); // Call parent class function
        cout << "Salary: " << salary << endl;
    }
};

// LEVEL 3, DERIVED from typist
class casual : public typist {
private:
    float daily_wages;

public:
    void get_details() {
        cout << "\nEntering Casual Typist Details..." << endl;
        get_speed();
        cout << "Enter Daily Wages: ";
        cin >> daily_wages;
    }

    void display_details() {
        cout << "\n--- Casual Typist Information ---" << endl;
        display_speed();
        cout << "Daily Wages: " << daily_wages << endl;
    }
};


// --- Main function with Switch-Case Menu ---
int main() {
    int choice;
    teacher t1;
    officer o1;
    regular r1;
    casual c1;

    do {
        cout << "\n--- Staff Database Menu ---" << endl;
        cout << "1. Create Teacher Record" << endl;
        cout << "2. Create Officer Record" << endl;
        cout << "3. Create Regular Typist Record" << endl;
        cout << "4. Create Casual Typist Record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clears the input buffer

        switch (choice) {
            case 1:
                t1.get_details();
                t1.display_details();
                break;
            case 2:
                o1.get_details();
                o1.display_details();
                break;
            case 3:
                r1.get_details();
                r1.display_details();
                break;
            case 4:
                c1.get_details();
                c1.display_details();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}