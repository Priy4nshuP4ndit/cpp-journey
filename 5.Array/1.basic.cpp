#include <iostream>
using namespace std;
int main(){
    //array is an linear contigous data structure

    //method 1 to create it
    //type arr_var[size] = {a , b , c , ...}
    int arr[3] = {10 , 20 ,30};

    //method 2 to create it
    //type arr_var[size];
    //arr_var[index] = value;
    int arr2[4];
    arr2[0] = 100;
    arr2[1] = 200;
    arr2[2] = 400;
    arr2[3] = 1600;

    //method 3 to create it
    //type arr_var[] = {a , b , c , ...} here you did'nt mentioned size of an array
    char arr3[] = {'a' , 'b' , 'c' , '$' , '#'};


    cout << arr[0]<<endl;
    cout << arr[1]<<endl;
    cout << arr[2]<<endl;
    cout << endl;
    for(int i = 0; i<=3 ;i++){
        cout << arr2[i]<<endl;
    }
    for(int j = 0; j<=4 ;j++){
        cout << arr3[j]<<endl;
    }
    return 0;
}