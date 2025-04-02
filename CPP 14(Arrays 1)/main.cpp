//  HEADING:    PRE ASSIGNED VALUES IN ARRAYS
// 1.      what is a array? full explaination?
// =>      Array is a colection of elements of the same data tupe that are stored 
//         sequently(one after another) in memory 

//2. NOTE: 1, The index of the array alwatys starts with 0.
//           E.G. arr[3] = {10,20,30}
//                       0, 1, 2  (i.e. the position of 10 in the array is 0 
//                                       the position of 20 in the array is 1
//                                       and The position of 30 in the array is 2
//                                       and so on....)           
//          3. the size of the above array is 3 (i.e it can take three values inside it) 
  

// wtiting a code without array  ;
//  E.G.


//  #include <iostream>
//   using namespace std; 
//    main(){
//   int a = 10;
//   int b = 20;
//   int c = 30;
//  int d = 40;
//   cout<<a<<ends<<b<<end<<c<<ends<<d  
//
//
//    return 0;}

//  if we print the above we will get 4 values (i.e 10,20,30 and 40)
//   but for 100 values we cant write the code as we wrote in above for 4 valus since
//   it would be very lengthgy and time consuming as well sp for which we will use the 
//   the concept of array


// writing the above code with the concept of array:

#include <iostream>
using namespace std;
 main(){ 
     int a[5] = {10,20,30,40,50};   //we used array to store 5 integral values
    for(int i=0;i<5;++i){          //we are printing "i" becoz when i=0 then 10 will be printed
     cout<<a[i]<<endl;              // and we wrote  ++i means after printing 10 it will print 
                                   //the next value of i(i.e. i=2 which is 20 inside our array)
                                   //and this goes on.... until the condition i<5 is achieved 
                                   // means vs code will print the last value i=4(i.e. i<5 which
                                    // is stored as a value of 50 inside our array )when the value
                                    // 50 is printed the operation is stoped(since we wrote gave a condition)
    }


    return 0;
}

// NOTE: HERE WE USED "FOR" LOOP IN ABOVE SO AS TO GET VALUES ONE AFTER ANOTHER 
//CONTINOUSLY IN A LOOP (I.E. 10
//                              20
//                              30
//                              40 
//                              50)