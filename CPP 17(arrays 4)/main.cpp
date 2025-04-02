// HEADING:  PRINTING ONE PARTICULAR VALUE INSIDE ARRAY 

#include <iostream>
using namespace std;
 main(){ 

     int a[5];
     cout<<"Enter Array Elements:";   // CODE FOR TAKING INPUT 
      for(int i=0;i<5;++i){  
        cin>>a[i];                    // we are taking input in array 'i' 
      }


    for(int i=4;i>=0;--i){          // here we put 'cout<<a[1]'  bz we want to print only the second position element of the array 
     cout<<a[1]<<ends;}              
                                    
                                    
               return 0;}  


        // here we will get the second positioned array element printed 5 times 
        // since we wrote the code inside for  loop, but to get the second array eelelemt                            
        // printed once ony, we will not use for loop 
         
