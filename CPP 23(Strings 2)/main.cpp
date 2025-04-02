// // HEADING STINGS -- 2
// Here we made a character type array of size 20


#include <iostream>
#include <string.h>
 using namespace std;

main(){

    char myName[20];                     
    cout << "Enter You Full Name: ";
    cin >> myName;
    cout << "Full Name: " << myName << endl;

    string myAddress;
    cout << "Enter Your Full Address: ";
    cin>>myAddress;
    cout << "Full Address: " << myAddress;

    return 0;
}

// in this code we used cin funtion to take input but we got a conflict that 
// we were unable to take the input of 'my adress'  and also the fulL name was  not printed
// Comletely so we have to use a different kind of input function other than 'cin'