// HEADING : IF ELSE STATEMENTS

#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Enter your age" << endl;

    cin >> age;

    if (age > 150)

    {
        cout << "Invalid age";
    }

    else if (age >= 18 || age<1)
    {
        cout << "You can vote";
    }

    else
    {
        cout << "You cannot vote";
    }
    return 0;
}



//NOTE:    1.At 1st in if else statement we will write 'if'statement
//             and then 'else if' statement and at last we write 'else'  
//             statement


//        2. the order must be mantained as written in the above code 


//       3. when we run the code it will check 1st the "if" statement 
//             and if the 'if' statement is ivalid then the code will not go 
//             further and check the other statements


//       4.if the 'if' statement is satisfied then it will check for  "else if"
//           statement and "else statement"
