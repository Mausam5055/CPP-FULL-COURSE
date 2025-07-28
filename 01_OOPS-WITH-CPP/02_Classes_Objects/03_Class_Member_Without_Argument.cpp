//Defining Class Member without Argument

#include <iostream>
using namespace std;

class emp {
    string name;
    int eid;
    float Basic;

public:
    void input() {
        cout << "Enter name, eid and Basic salary: ";
        cin >> name >> eid >> Basic;
    }

    void output() {
        cout << "Name: " << name << "\nEID: " << eid << "\nBasic: " << Basic << endl;
    }

    float grossSal() {
        float gross, DA, HRA;
        DA = Basic * 0.5;
        HRA = Basic * 0.15;
        gross = Basic + DA + HRA;
        return gross;
    }
};

int main() {
    emp e1;
    e1.input();
    e1.output();

    float g = e1.grossSal();
    cout << "Gross Salary: " << g << endl;

    return 0;
}
