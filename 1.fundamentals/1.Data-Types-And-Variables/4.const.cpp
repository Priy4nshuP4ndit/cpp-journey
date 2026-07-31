#include <iostream>
using namespace std;
int main(){
    
    // you can change upper variable
    int i = 24;
    cout <<  "i_initial " << i << endl;
    i = 30;
    cout<< "i_final " << i << endl;

    // const makes variable to non changable
    const double pie = 3.14;
    cout << "pie is const: " << pie << endl;

    // pie = 2.73; // expression must be modified value
    cout << pie << endl;
    return 0;
} 