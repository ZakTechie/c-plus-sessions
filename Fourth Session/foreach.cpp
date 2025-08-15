#include <iostream>
using namespace std;

int main(){
    // string name = "Ahmed" ;
    // name[0] = 'G' ;
    // cout << name ; 
    // for(type varible : arrayName){

    // }

    // string name = "Ahmed" ; 
    // for(char t : name){
    //     cout << t << endl ;  
    // }

    int numbers[3] = {10 , 31 , 5};
    for(int n : numbers){
        if(n % 2 == 0 ){
            cout << n << "\n";
        }
    }
    system("pause");
    return 0;
}