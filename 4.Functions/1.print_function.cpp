#include <iostream>
#include <string>
using namespace std;
string print(string str){
    cout << str<<endl;
    return str;
}
int printS(int i);
int main(){
    print("Hello world!");
    printS(823);
    return 0;
}
int printS(int i){
    cout << i <<endl;
    return i;
}