//HEADING:  TYPECASTING 2

#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
int main(){
  int a =343;
  float b = 87.94;
  cout<<(float) a/34<<endl;

  cout<<(int) b;



    return 0;
}


// 1st output here we will get float value as 10.0882
// and 2nd output we will get 87 only not 87.94 or 88(by rounding off)  
// in this way we can do the typecasting 
//e.g. int ko typecaste karke double 
//double ko float
//float ko double and so on.... 