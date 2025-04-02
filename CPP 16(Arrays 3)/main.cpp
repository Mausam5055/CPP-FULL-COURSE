//HEADING:   PRINTING ARRAY IN REVERSE ORDER

#include <iostream>
using namespace std;
 main(){ 

     int a[5];
     cout<<"Enter Array Elements:";   // CODE FOR TAKING INPUT 
      for(int i=0;i<5;++i){  
        cin>>a[i];                    // we are taking input in array 'i' 
      }


    for(int i=4;i>=0;--i){          
     cout<<a[i]<<ends;}             // the code is written so as to print the integers in reverse order
                                    
                                    
     return 0;}