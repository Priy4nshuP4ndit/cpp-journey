#include <iostream>
using namespace std;
int main(){
    //&&
    //||
    //!
    bool t = true;
    bool f = false;
    cout << "true && true: " << (t && t )<<endl;
    cout << "true && false: " << (t && f )<<endl;
    cout << "false && false: " << (f && f )<<endl;
    cout << "true || true: " << (t || t )<<endl;
    cout << "true || false: " << (t || f )<<endl;
    cout << "false || false: " << (f || f )<<endl;
    cout << "!true: " << (!t) <<endl;
    cout << "!false: " << (!f) <<endl;

    return 0;
}