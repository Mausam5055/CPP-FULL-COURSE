// HEADING: POINTERS CONCEPT

//---> Pointer is a variable thar holds the adress of another variable.

//e.g. if say int a = 10;
//     then *ptr = &a;     (here *ptr means pointer of 'a' that holds the adress of a )

//explaination-->     let say the adress of 'a' = '1000'
//     so int a only means the value of 'a' which is '10'
//     but *ptr a means the the value of 'a' along with its adress which is '1000'
//      the pointer function(*ptr) here holds the adress of the "int a "  


// NOTE:    1.While working with pointers we have to unary operators 
//             &---->   this is called address of opearotor(either of pointer 'p' or integr "a")
//             *---->   this is called value at address operator 

#include<iostream>
using namespace std;
main(){
int a=10;
int *p=&a;

cout<<a<<endl;
cout<<&a<<endl;
cout<<p<<endl;
cout<<*p<<endl;
cout<<&P<<endl;    

return 0;
}