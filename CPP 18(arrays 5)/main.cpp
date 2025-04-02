// HEADING: ARRAY  ELEMENT WITHOUT "FOR" LOOP 


#include <iostream>
using namespace std;
 main(){ 

     int a[5];
     cout<<"Enter Array Elements:";   // CODE FOR TAKING INPUT 
      for(int i=0;i<5;++i){  
        cin>>a[i];                    // we are taking input in array 'i' 
      }


                         // here we put 'cout<<a[1]'  bz we want to print only the second position element of the array 
     cout<<a[1]<<ends;             
                                    
                                    
               return 0;}  


//  for printing only one element inside array we dont use 'for' loop  or else we
// will get the single element printed several times 
