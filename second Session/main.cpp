#include <iostream>
#include <string>
using namespace std;

/*
    boolean ==> 1 byte 
    char ==> 1 byte 
    int ==>  2 or 4 bytes
    float ==> 4 bytes  (7 بعدالعلامة)
    double ==> 8 bytes (15 بعد العلامة)
    A ==> Asci 65 
    a ==> Asci 97 
*/
int main(){
    // int a ; 
    // cout << "Enter Number: " ; 
    // cin >> a ;
    // cout << "You Entered " << a << endl;
    // int num = 5 ; 
    // float f = 1E-3 ; 
    // cout<< f ;

    // bool isValid = true ;  
    // cout << isValid ;

    // char a = 'A' ; 
    // char a = 65 ; 
    // cout << a << endl; 
    // string greeting = "Hello" ; 
    // cout << greeting <<endl; 
    // auto g = 5 ; 
    // g = "Hello" ; 
    auto my = string("Hello") ; 
    decltype(my) name = "Ahmed" ; 
    cout << "Hello" << "Ahmed" ;  
    system("pause");
    return 0;
}