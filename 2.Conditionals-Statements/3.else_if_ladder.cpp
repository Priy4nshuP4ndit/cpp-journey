#include <iostream>
using namespace std;
int main(){
    int temp;
    cout << "Enter temperature(C): ";
    cin >> temp;
    if (temp < 0){
        cout << "you are freezing"<<endl;
    }
    else if (temp>=0 && temp<=15){
        cout << "Its too cool outside"<<endl;
    }
    else if(temp>15 && temp<=25){
        cout << "its not cool , neither hott" <<endl;
    }
    else if(temp > 25 && temp <=35 ){
        cout << "Its hot"<<endl;
    }
    else if (temp>35 && temp<=45){
        cout << "You are on fire"<<endl;
    }
    else if (temp > 45 && temp <= 60){
        cout << "emergency heat wave alert"<<endl;
    }
    else if(temp > 60){
        cout << "you are no longer here...."<<endl;
    }
    return 0;
}