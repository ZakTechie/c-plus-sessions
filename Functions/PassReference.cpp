#include <iostream>
using namespace std;

// void changeValue(int &num){
//     num = 50;
// }

// void swapNums(int x , int y){
//     int temp = x ;
//     x = y ; 
//     y = temp ; 
// }

void myfunc(int arr[6]){
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << endl; 
    }
}

int main(){
    // int value = 10;
    // changeValue(value);

    // cout << value ; 

    // int num1 = 10;
    // int num2 = 20; 
    // cout << "Before swap : " << "\n" ; 
    // cout << num1 << num2 << endl; 
    // swapNums(num1,num2);
    
    // cout << "After swap : " << "\n" ; 
    // cout << num1 << num2 << endl; 
    int nums[5] = {10,20,30,40,50};
    myfunc(nums);
    system("pause");
    return 0;
}