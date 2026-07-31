#include <iostream>
using namespace std;
int main(){

//~x;     // Bitwise NOT

int i = 20;
cout<<"i = "<<i<<endl;
cout<<"++i = "<<++i<<endl; //pre increment

cout<<"now i = "<<i<<endl;
cout<<"i++ = "<<i++<<endl; //post increment
cout << "After upper OP now i = " <<i<<endl;

cout<<"now i = "<<i<<endl;
cout<<"--i = "<<--i<<endl; //pre decrement


cout<<"now i = "<<i<<endl;
cout<<"i-- = "<<i--<<endl; //post decrement
cout << "After upper OP now i = " <<i<<endl;


cout << "+i = " << +i << endl; // tells the value is positive
cout << "-i = " << -i << endl; // tells the value is negative 

bool x = true ;
cout<<"currently x is true: " << x <<endl;
cout<<"After !x: " << !x <<endl; // not operator


 // bitwise after sometime
 // AND -----all conditions true for true
 // OR ------any one condition be true for true
 // NOT ----- true to false , false to true
 // XOR ------ all false to true
 //<<
 //>>


    return 0;
}