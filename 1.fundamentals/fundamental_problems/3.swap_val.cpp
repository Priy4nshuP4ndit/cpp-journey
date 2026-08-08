#include<iostream>
using namespace std;
int main(){
    // Take two numbers from user and swap their values.
    int x,y,z;
    cout << "Enter first value: ";
    cin >> x;
    cout << "Enter second value: ";
    cin >> y;
   z=x;
   x=y;
   y=z;
   

   cout << "swapped!! , Now first value is: "<< x << " and second value is: " << y << endl;
    return 0;
}