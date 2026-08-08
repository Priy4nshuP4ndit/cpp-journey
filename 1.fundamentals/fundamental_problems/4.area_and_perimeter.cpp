#include <iostream>
using namespace std;
int main(){
    // Take length and breadth of rectangle and print perimeter & Area. 
    int length , breadth;
    cout << "Enter length of your rectangle: ";
    cin >> length;
    cout << "Enter breadth of your rectangle: ";
    cin >> breadth;  
    cout << "Perimeter of the rectangle is: " << (2*length + 2*breadth) <<endl;
    cout << "Area of the rectangle is: " << (length*breadth) <<endl;
    return 0;
}