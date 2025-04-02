//    HEADING:    LOOPS
//     THERE ARE THREE TYPES OF LOOPS 
//             1.WHILE LOOPS
//             2.DO WHILE LOOPS 
//             3.FOR LOOP
 

#include <iostream>
using namespace std;
int main(){
   int index = 0;
   while (index<34)
   {
      cout<<"we are at index number"<<index<<endl;
      index= index + 1;
   }

    return 0;
}




//NOTE:           1.Let us consider a name "akhilesh" and we are to print this name 10
//                     times in our vs code , for this we have three options 
//
//                  OPTION 1:   We have to type : cout "10" times in our vs code 
//                              and then run the program to get the output (which ios practically very diffucult)
//
//                  OPTION 2:   We will create "10" variables and then we will store 
//                              the name "akhilesh " in these variables and click run 
//                              to get the output 
//
//                  OPTION 3:   We can take the help of "loops" so as to make our task easy
//                              and print "akhilesh" 10 times in our vs code easily
//                                we will write =>  for(int i=1;i<=10;++i )
//
//
//                  2.loop is usude to repeat a given block of code until tyhe given statement 
//                  is true        



//                EG OF OPTION 3:  
//                                
//                                #include <iostream>
//                                using namespace std;
//                                int main(){
//                               for(int i=1;i<=10;++i )
//                               {
//                                 cout<<"Akhilesh"<<endl;
//                               }
//
//                                 return 0;
//                                }



//               EG OF OPTION 1:    #include <iostream>
//                                using namespace std;
//                                int main(){
//                                             COUT<<"Akhilesh" <<endl;     
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;      
//                                             COUT<<"Akhilesh" <<endl;   
//                                         return 0; }     


//                 EG OF OPTION 2;      Let us take this example using numbers
//                                        rather than using the name "akhilesh "
//                                        for better understanding  
//    
//                                       #include <iostream>
//                                using namespace std;
//                                int main(){
//                                            int a=1;
//                                            int b=2;
//                                            int c=3;
//                                            int d=4;
//                                            int e=5;
//                                            cout<<a<<endl;
//                                            cout<<b<<endl;
//                                            cout<<c<<endl;
//                                            cout<<d<<endl;
//                                            cout<<e<<endl;
//                                            return 0;}


// the above can be done easily by 'while' loop ;
//                                              #include <iostream>
//                                using namespace std;
//                                int main(){ 
//                                              int a= 1;
//                                              while(a<=100)
//                                           { 
//                                             cout<<a<<endl;
//                                           }    
//                                           return 0;  


//'WHILE' loop and 'FOR' loop is used when the statement is true but "DO WHILE LOOP" is used
//when we dont bother wether the statement is true or not but we jst want it be printed                           
//                EG: #include <iostream>
//                                using namespace std;
//                                int main(){
//                                               int a=1
//                                               do
//                                               {
//                                                cout<<a<<endl;
//                                                ++a;
//                                               }
//                                               while (a<0);
//                                            return 0;   }
//                                                


//here in the above code we wrote a=1 and then we wrote a<0 (i.e. the statement is wrong still the code 
//will get printed since we used do while loop)  but in case of "while" and "for" loop our condition was 
//correct or else we would have got error                 ;
                                                   
