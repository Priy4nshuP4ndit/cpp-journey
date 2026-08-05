#include <iostream>
using namespace std;
int main(){

    //there is nothing like index
    int arr[3] = {5,10,15};
    cout <<"arr: " << arr << endl;
    cout <<"Address of 0th index of array (&arr[0]): " << &arr[0] << endl;

    //so while doing cout the array we got the addres of its first element
    //using that address we can find addresses of other elements of arrary
    
    cout << "adress of arr[2] = arr+2------> " << (arr + 2) << endl;
    cout << "value of arr[2]------>"<< *(arr + 2) << endl;


    return 0;
}