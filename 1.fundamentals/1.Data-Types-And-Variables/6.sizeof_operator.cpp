#include <iostream>
using namespace std;
int main(){
    // every variable assigns some data in the memory
    // this value may varries according to computer architecture and operating system
    cout<<"size of int: " << sizeof(int)<< "bytes" <<endl;
    cout << "size of double: " << sizeof(double) <<"bytes" <<endl;
    cout << "size of char: " <<sizeof(char) <<"bytes" <<endl;
    return 0;
}