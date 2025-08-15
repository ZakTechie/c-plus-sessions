#include <iostream>
#include <array>
using namespace std;

int main(){
    // // int num = 4 ; 
    // // int* n = &num ; 
    // // cout << *n << endl ; 
    // array<int , 3> arr = {1 , 4 , 5};
    // array<int , 3> arr1 ; 
    // arr1 = arr ;

    // int arr[3], arr1[3] = {1 , 3 , 4};
    // // // cout << arr[0] << endl;
    // cout << arr1[0] << endl ;
    // // int* arr1[] = &arr ; 
    // // cout << *arr1[0] << endl ;
    int arr[3] = {1 , 4 ,5} ; 
    int (*arr1)[3] = &arr ; 
    cout << *arr1[0] << endl ;  
    system("pause");
    return 0;
}