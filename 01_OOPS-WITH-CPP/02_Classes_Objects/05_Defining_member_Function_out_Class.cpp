//Defining Member Function Outside The class

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string Employee_name;
    float Basic_salary;
    int Employee_Id;
    float DA, HRA, Gross_salary;

public:
    void setDetails(string name, int id, float salary); // only declaration
    void output(); // only declaration
};

// Definition of setDetails() outside class
void Employee::setDetails(string name, int id, float salary) {
    Employee_name = name;
    Employee_Id = id;
    Basic_salary = salary;

    // Calculate allowances and gross salary
    DA = 0.50f * Basic_salary;
    HRA = 0.15f * Basic_salary;
    Gross_salary = Basic_salary + HRA + DA;
}

// Definition of output() outside class
void Employee::output() {
    cout << "\n--- Employee Details ---" << endl;
    cout << "Name: " << Employee_name << endl;
    cout << "ID: " << Employee_Id << endl;
    cout << "Basic Salary: " << Basic_salary << endl;
    cout << "DA: " << DA << endl;
    cout << "HRA: " << HRA << endl;
    cout << "Gross Salary: " << Gross_salary << endl;
}

int main() {
    Employee e1, e2, e3;

    // Passing arguments
    e1.setDetails("Rahul", 101, 30000);
    e2.setDetails("Neha", 102, 40000);
    e3.setDetails("Amit", 103, 50000);

    e1.output();
    e2.output();
    e3.output();

    return 0;
}
