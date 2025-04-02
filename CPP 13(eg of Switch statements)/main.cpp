//   HEADING:  SWITCH STATEMENTS

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "you are 12 years old" << endl;
        break;

    case 18:
        cout << "you are 18 years old" << endl;
        break;

    default:
        cout << "you are neither 12 nor 18 years old";
    }

    return 0;
}

