// HEADING: STRINGS,USING A FNCTION OTHER THAN "CIN" to TAKE INPUT WITHOUT ANY CONFLICT

#include <iostream>
#include <string.h>
using namespace std;
main(){

char myName[20];
cout<<"Enter You Full Name: ";
gets (myName);
puts(myName);

string myAddress;
cout<<"Enter Your Full Address: ";
getline(cin, myAddress);
cout<<"Full Address: "<<myAddress;

return 0;}


//NOTE:1. WE GOT CONFLICT IN PREVIOUS CODE BZ WE USED THE FUNCTION 'CIN' FOR TAKING
//       INPUT VALUE,BUT AS WE USED 'INCLUDE <STRING.H> (it is a library that we 
//      included in our vs code jst  like we included, iostream)SO WE USED A DIFFERENT 
//       KIND OF FUNCTIONS FOR TAKING INPUT (i.e. gets,puts,getline functions are used)
//      
//
//     2. HERE THE FUNCTIONS THAT WE USED (i.e. gets,puts and getline) are all included 
//        in the <string.h> LIBRARY THAT WE IMPORTED IN OUT CODE FROM THE <STRING.H>
//         LIBRARY 
//      
//     3. DIFFERENCE BETWEEN "ARRAY"(i.e. char my name[20])   AND "STRING" (i.e. string my adress)
//      
// ---------> (a).array size is always fixed that means we have to assign a particular size to a   
//               array and then work within the assigned size, hence array has a fixed size like 
//                in the above array it has a fixed size of 20
//
//---------->(b). but in string size isnt fixed that means we have got no limit to work within our 
//                string function hence string is dynamic in nature
//
//----------->(c.) array is mutuable but string is not mutable
//                 i.e. we can change the input value in array but we cannot do so in string 
//                      if we do changes in string the changes wont appear in the same object
//                      rather iot would appear only in the new object
// 
//
//
//
//
//
