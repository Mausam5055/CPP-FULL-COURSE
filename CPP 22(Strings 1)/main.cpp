//HEADING:  STRINGS 1
//  string is nothing but seqence of characters .In simple ,which 
//  letters are written in sequence is considered as string




#include <iostream>
#include <string> 
using namespace std;
int main(){

    string name = "mausam";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of  name  is"<<name.length()<<endl;
    cout<<"The name is" << name.substr(0,3)<<endl;
    cout<<"The name is"<< name.substr(2,4);


    return 0;
}

// NOTE:1. The string index always starts with 0(in abome nam mausam / m=0 and last letter m=null)
//      2. the last character of string is'null'