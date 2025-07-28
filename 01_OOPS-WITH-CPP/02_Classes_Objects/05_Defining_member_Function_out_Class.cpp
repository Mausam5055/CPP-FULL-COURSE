//Defining Member Function Outside The class

#include <iostream>
using namespace std;

class emp {
    string name;
    int eid;
    float Basic;

public:
    void input(string n, int id, float b);         // Declaration only
    void output();                                 // Declaration only
    float grossSal(float DA, float HRA);           // Declaration only
};

// Define input() outside class
void emp::input(string n, int id, float b) {
    name = n;
    eid = id;
    Basic = b;
}

// Define output() outside class
void emp::output() {
    cout << "Name: " << name << "\nEID: " << eid << "\nBasic: " << Basic << endl;
}

// Define grossSal() outside class
float emp::grossSal(float DA, float HRA) {
    float gross;
    gross = Basic + DA + HRA;
    return gross;
}

int main() {
    emp e1;

    // You can take input from user or assign directly
    string name;
    int id;
    float basic;

    cout << "Enter Name, ID and Basic Salary: ";
    cin >> name >> id >> basic;

    // Pass arguments to input()
    e1.input(name, id, basic);

    // Display employee details
    e1.output();

    // Calculate DA and HRA
    float DA = basic * 0.5;
    float HRA = basic * 0.15;

    // Get gross salary
    float g = e1.grossSal(DA, HRA);
    cout << "Gross Salary: " << g << endl;

    return 0;
}
