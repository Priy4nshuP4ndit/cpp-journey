#include <iostream>
using namespace std;
int main(){

//int to double
int i = 20;
cout<<"int (20) to double " << double(i)<<endl;
cout<<"int (20) to char " << char(i)<<endl;

double d = 20.5;
cout<<"double (20.5) to int " << int(d)<<endl;
cout<<"double (20.5) to char " << char(d)<<endl;
cout<<endl;
char c = 'a';
cout<<"char (a) to int " << int(c)<<endl; 
cout<<"char (a) to double " << double(c)<<endl; 
    return 0;
}