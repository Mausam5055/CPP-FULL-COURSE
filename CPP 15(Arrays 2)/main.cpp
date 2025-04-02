// HEADING: TAKING VALUE INPUT IN ARRAY AFTER THE CODE RUNS

#include <iostream>
using namespace std;
 main(){ 

     int a[5];
     cout<<"Enter Array Elements:";   // CODE FOR TAKING INPUT 
      for(int i=0;i<5;++i){  
        cin>>a[i];                    // we are taking input in array 'i' 
      }


    for(int i=0;i<5;++i){          // CODE FOR GETTING OUTPUT AFTER RUNNING THE CODE 
     cout<<a[i]<<ends;}             // to get output in the same line we use 'ends'
                                    // and to get output in differenrt lines we use 'endl'a'

     return 0;}