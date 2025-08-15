#include <iostream>
using namespace std;

struct T
{
    int n1 ; 
    int n2 ; 
};

void print(T n , int num1 , int num2); 
// int[] reterive();
int main(){
    T g ;
    print( g , 4, 7) ; 
//    cout << reterive()<< endl;
    system("pause");
    return 0;
}

void print(T n , int num1 , int num2){
    n.n1 = num1 ; 
    n.n2 = num2 ; 
    cout << n.n1 + n.n2 << endl; 
}

// int[] reterive(){
//     return { 5 , 6 , 6} ; 
// }