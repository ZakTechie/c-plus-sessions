#include <iostream>
using namespace std;

// int sum(int num1 , int num2);
// double sum(double num1 , double num2);



// function template
// template <typename T>

// return_type function_name(T paramter){
//     code
// }

// class Template
// template <typename T>
// class ClassName{
//     // members and methods T
// };

template <typename T1 , typename T2>

T2 sum(T1 num1 , T2 num2){
    return num1 + num2 ; 
}

// template <typename T>
// class Box{
//     public:
//     T value ; 
//     Box(T v){
//         value = v ;
//     }
//     T show(){
//         return value ;
//     }
// };
int main(){
    // cout << sum(4 , 5) << endl; // 9
    // cout << sum(4.5 , 6.25) << endl; // 10.75
    // cout << sum(4, 6.25) << endl; // get error
    // Box b("Hello");
    // cout << b.show();

    cout << sum(4 , 4.5)<< endl ; 
    cout << sum(4 , 6) << endl ; 
    cin.get();
    return 0;
}

// int sum(int num1 , int num2){
//     return num1 + num2 ; 
// }
// double sum(double num1 , double num2){
//     return num1 + num2 ; 
// }