#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: "<<endl;
    cin>>age;
    if (age >= 18){
        cout << "Logged in on site"<<endl;
    }
    else{
        cout << "you are minor" <<endl;
    }
    return 0;
}