#include <iostream>
using namespace std;

int main(){
    // int countDown = 3 ; 
    // while(countDown >= 1){
    //     cout << countDown << "\n";
    //     countDown-- ; 
    // }
    // cout << "Happy New Year!" << "\n";

    // int num = 0 ; 
    // while(num < 11){
    //     cout << num << "\n" ; 
    //     num += 2 ;  
    // }

    int num = 12345 ; 
    int reverse = 0  ; 
 
    // num = 0
    while(num){
        // Get last number from num and add it in reverse 
        reverse = reverse * 10 + num % 10 ; // 54320 + 1 = 54321 
        // Remove last number of num 
        num /= 10 ;  
    }
    cout << "Reversed Numbers " << reverse << endl; 
    system("pause");
    return 0;
}