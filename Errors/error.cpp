#include <iostream>
#include <string>
using namespace std;

int main(){
    // Syntax error Or Compile Error 
    // int a = 5 // Missing semicolon
    // cout << myVar ; // undeclared Variable
    // int a = "Hello" ; //Mismatiching types 

    // ======================================
    // Runtime Error  
    // int a = 10 , b = 0 ;
    // int re = a / b ;  // Dividing by zero
    // cout << re ; 

    // Accessing out-bound array elements
    // int nums[3] = {1 ,2 , 3};
    // cout << nums[8] ;

    // use deleted memory(dangling pointer)
    // int* ptr = new int(10);
    // delete ptr ; 
    // cout << *ptr ; 

    int sum = 0  ;
    int n = 5 ;  
    cout << sum  + n ; 

    // Good Habits:
    // initialize variable  
    // use meaningful nameing 
    // keep your code clean and spaces 
    // keep your function short and focused 
    // check if loops or conditions are running as expected 
    // Read error messages carefully 

    
    cin.get();
    return 0;
}

