#include <iostream>
#include <string>
using namespace std;
int main(){
    /*
    2. Take name and age of user as input and Print 
    
    *Example 1:*
    
    - Input = name = “Harsh”, age = 24
    - Output = Hello Harsh, you are 24 years old.
    */
   string name ;
   int age;
   cout << "Whats your name: " ;
   getline(cin,name);
   cout << "How old are you: ";
   cin >> age;
   cout << "Hey " << name << " you are " << age << "yrs old\n" ;
  


    return 0;
}