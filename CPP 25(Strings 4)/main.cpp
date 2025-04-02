//HEADING: MODIFYING A OBJECT IN STRING

//(i.e string function is dynamic in nature)

// for adding a letter 'A' in the last of 'learn coding' we took the help of .push_back
//function(i.e. we did a modification to our object named as 'learn coding' )   

#include <iostream>
#include <string.h>
using namespace std;
main(){
    string myAddress = "Learn Coding";
    cout << "Original Value: " << myAddress << endl;
    myAddress.push_back('A');
    cout << "Modified Value: " << myAddress << endl;
    myAddress.pop_back();
    cout<<"Pop value:"<<myAddress<<endl;
}



//Now to remove the letter 'A' from our object(i.e word) named 'learn codingA' 
//we used the function .pop_back() and converted again the object from 'learn 
//codingA' to 'learn coding'  ----{see the changes after running the code }
