// A customer has two two types of accounts: -Saving account to store the savings balance. 
// -Current account to store the current balance. Create classes for each type of account 
// with balance as private data. Create a friend function that accesses 
// both private balances of the customer, calculate and display total balance.

#include <iostream>
using namespace std;

class Current;  // forward declaration

class Saving {
    float balance;   // private
public:
    Saving(float b) { balance = b; }
    friend void showTotal(Saving s, Current c);  // friend function
};

class Current {
    float balance;   // private
public:
    Current(float b) { balance = b; }
    friend void showTotal(Saving s, Current c);  // friend function
};

// Friend function
void showTotal(Saving s, Current c) {
    cout << "Saving Balance = " << s.balance << endl;
    cout << "Current Balance = " << c.balance << endl;
    cout << "Total Balance = " << s.balance + c.balance << endl;
}

int main() {
    Saving s(3000);     // saving account balance
    Current c(7000);    // current account balance

    showTotal(s, c);    // call friend function
    return 0;
}
