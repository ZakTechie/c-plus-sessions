#include <iostream>
using namespace std;

int main(){
//     try{
//     int age = 15 ; 
//     if (age >= 18){
//         cout << "Access granted";
//     }else{
//         throw(age);
//     }
// }catch(int num){
//     cout << "Access Denied you must be at least 18 years old\n";
//     cout << "Your age " << num ;
// }

    try{
        int num1 = 10 , num2 = 0 ; 
        if(num2 == 0){
            throw 500;
        }
    }catch(...){
        cout << "Not allowed" ; 
    }
    cout << endl ; 
    cin.get();
    return 0;
}