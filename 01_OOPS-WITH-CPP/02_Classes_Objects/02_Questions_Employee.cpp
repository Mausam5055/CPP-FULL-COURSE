// Q2. Write a C++ program to manage details of n employees using a 
// class Employee and STL vector. The program should:

//a.  Take the number of employees (n) as input from the user.
//b.  For each employee, accept name, ID, and basic salary.
//c.  Calculate and display DA (50%), HRA (15%), and Gross Salary.
//d.  Display all entered and calculated data using class member function

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    string Employee_name;
    float Basic_salary;
    int Employee_Id;
    float DA, HRA, Gross_salary;

public:
    void input() {
        cout << "\nEnter Employee Name: ";
        cin >> Employee_name;
        cout << "Enter Employee ID: ";
        cin >> Employee_Id;
        cout << "Enter Basic Salary: ";
        cin >> Basic_salary;

        // Calculate DA, HRA, Gross
        DA = 0.50f * Basic_salary;
        HRA = 0.15f * Basic_salary;
        Gross_salary = Basic_salary + DA + HRA;
    }

    void output() const {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << Employee_name << endl;
        cout << "ID: " << Employee_Id << endl;
        cout << "Basic Salary: " << Basic_salary << endl;
        cout << "DA (50%): " << DA << endl;
        cout << "HRA (15%): " << HRA << endl;
        cout << "Gross Salary: " << Gross_salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> employees(n);  // Vector of size n

    // Input details
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Employee " << i + 1 << ":";
        employees[i].input();
    }

    // Output details
    for (int i = 0; i < n; ++i) {
        cout << "\nDisplaying details for Employee " << i + 1 << ":";
        employees[i].output();
    }

    return 0;
}
