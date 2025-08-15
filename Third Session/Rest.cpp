#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // cout << min(5 ,10) << "\n"; 
    // cout << sqrt(4) << "\n" ;
    // cout << round(4.7) << "\n" ; 
    // cout << log(2) << "\n"; 

    // Real Example:
    // int n1 , n2 ;
    // cin >> n1 >> n2 ; 
    // cout << "The Max Number is " << max(n1 , n2)<<"\n" ; 

    // Boolean
    // bool isValid = true ; 
    // Boolean Expression 
    // int z  = 7 , y = 8 ;
    // cout << (z == y) << "\n";
    
    // int myAge = 26 ; 
    // int votingAge =18 ; 
    // if(myAge >= votingAge){
    //     cout << "Old Enough to vote"  ; 
    // }else{
    //     cout << "Not Old enought to vote"; 
    // }
    // cout << endl ;

   // Structure of if
    // if(condition){
    //     body
    // }else if(condition){
//     body    
// }

// Short hand if else 
// variable = (condition)? expressionTrue : expressionFalse
int time = 15 ; 

// if(time < 18 ){
//     cout << "Good day";
// }else {
//     cout << "Good Evening" ; 
// }


// if(time < 18 ){
//     cout << "Good day";
// }else if (time > 20) {
//     cout << "Good Evening" ; 
// }else{
//     cout << "Not Found" ; 
// }


// string result = (time < 18)? "Good day" : "Good Evening" ; 
// cout << result << endl ; 

// 0 , 1 
// 1 --> 10 
    // int doorCode = rand()  ; 
    // int num ; 
    // cin >> num ; 
    // string result = (num < doorCode)? "Smaller" :"Greater" ; 
    // cout << doorCode << endl ; 
    // cout << result << endl;

    // switch 
    int day = 4 ; 
    switch(day){
        case 0 : 
            cout << "Monday" ; 
            break;
        case 1 : 
            cout << "Tuesday" ; 
            break;
        case 2 : 
            cout << "Thursday" ; 
            break;
        default : 
                cout << "Error" ; 
                break;
        case 3 : 
            cout << "Friday";
    }
    system("pause");
    return 0;
}