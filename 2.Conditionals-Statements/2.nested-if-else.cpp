#include<iostream>
using namespace std;
int main(){
    int age;
    int user_id;
    int user_pass;
     cout << "Enter your age: " ;
     cin >> age;
    if (age>=18){
        cout << "WELCOME TO SERVER" << endl;
       
        cout << "Enter user id: " ;
        cin >> user_id;
        cout << "Enter user password: " ;
        cin >> user_pass;

        if(user_id == 1234 && user_pass == 1234){
            cout << "Welcome boss" << endl;
        }
        else{
            cout << user_id << " logged in" <<endl;
        }

    }
    else{
        char need;
        cout << "User is minor" << endl;
        cout << "Wanna open a minor account?(Y/n)" <<endl;
        cin >> need;
        if (need == 'Y' || need == 'y'){
            cout << "open our kids only website"<<endl;
        }
        else if (need == 'N' || need == 'n'){
            cout << "Then feel free to leave this website"<<endl;
        }
        else{
            cout << "Enter an accepting value(y/n)"<<endl;
        }
    }
    return 0;
}