// HEADING:         SWITCH STATEMENTS
//  what is a switch statement? full explaination?
//=>   Switch statement is nothing but multiple choice sections statement ,it means that when we
//      want to select any one case out of multiple case.E.G.-- In onle exam of multiple choice questions
//      the concept of switch statement is used.

//        (fotrmat of writing switch statement) SYNTAX OF SWITCH STATEMENT: switch(some expression)
//                                                                           {
//                                                                  case 1:  statement;
//                                                                        break;
//
//                                                                   case 2:  statement;
//                                                                        break;
//                                                                       .
//                                                                       .
//                                                                       .
//                                                                       .
//                                                                       .
//                                                                  case n : statement;
//                                                                        break;
//
//                                                              default: statement;}
//

#include <iostream>
using namespace std;
int main()
{
    char value;
    int num1, num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "what you want";
    cin >> value;
    cout << "Enter second number:";
    cin >> num2;
    switch (value)
    {
    case '+':
        cout << "Addition:" << num1 + num2;
        break;
    case '-':
        cout << "Subtraction:" << num1 - num2;
        break;
    case '*':
        cout << "Multiplication:" << num1 * num2;
        break;
    case '%':
        cout << "Remainder:" << num1 % num2;
        break;
    case '/':
        cout << "Division:" << num1 / num2;
        break;
    default:
        cout << "Invalid choice";
    }

    return 0;
}

//              NOTE:1.The default statement is always given at last it means
//                      that if we perform any other operation rather than throse
//                      that we mentioned in all our cases than our vs code will give
//                      "invalid" (i.e. the program wont run since we haven't put in our cases)