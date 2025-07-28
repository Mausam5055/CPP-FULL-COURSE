// Q1. Write a C++ program using a class Employee to store and display 
// details of 3 employees. The program should:
// a.Accept employee name, ID, and basic salary.
// b.Calculate Dearness Allowance (DA = 50% of basic salary), 
// House Rent Allowance (HRA = 15% of basic salary),  and Gross Salary.
// c.Display all the details including calculated values using a member 
// function.

#include <iostream>
using namespace std;

class Employee {
private:
    char Employee_name[50];
    float Basic_salary;
    int Employee_Id;
    float DA, HRA, Gross_salary;

public:
    void input() {
        cout << "Enter Employee Name: ";
        cin >> Employee_name;
        cout << "Enter Employee ID: ";
        cin >> Employee_Id;
        cout << "Enter Basic Salary: ";
        cin >> Basic_salary;

        // Calculate allowances and gross salary
        DA = 0.50f * Basic_salary;
        HRA = 0.15f * Basic_salary;
        Gross_salary = Basic_salary + HRA + DA;
    }

    void output() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << Employee_name << endl;
        cout << "ID: " << Employee_Id << endl;
        cout << "Basic Salary: " << Basic_salary << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "Gross Salary: " << Gross_salary << endl;
    }
};

int main() {
    Employee e1, e2, e3;

    cout << "Enter details of Employee 1:\n";
    e1.input();
    cout << "Enter details of Employee 2:\n";
    e2.input();
    cout << "Enter details of Employee 3:\n";
    e3.input();

    e1.output();
    e2.output();
    e3.output();

    return 0;
}
