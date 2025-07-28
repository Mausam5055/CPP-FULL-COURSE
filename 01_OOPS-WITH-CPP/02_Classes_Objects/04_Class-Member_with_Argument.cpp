//Defining Class Members By passing argument

#include <iostream>
using namespace std;

class emp {
    string name;
    int eid;
    float Basic;

public:
    // Member function with arguments
    void input(string n, int id, float b) {
        name = n;
        eid = id;
        Basic = b;
    }

    void output() {
        cout << "Name: " << name << "\nEID: " << eid << "\nBasic: " << Basic << endl;
    }

    float grossSal(float DA, float HRA) {
        float gross;
        gross = Basic + DA + HRA;
        return gross;
    }
};

int main() {
    emp e1;
    
    // Pass arguments to input() function
    string name = "Rahul";
    int id = 101;
    float basic = 10000;
    e1.input(name, id, basic);

    e1.output();

    // You can calculate DA and HRA outside and pass to grossSal()
    float DA = basic * 0.5;
    float HRA = basic * 0.15;

    float g = e1.grossSal(DA, HRA);
    cout << "Gross Salary: " << g << endl;

    return 0;
}
