#include <iostream>
using namespace std;


int sum(int a , int b){
    return a + b ; 
}

int sum(int a , int b , int c){
    return a + b + c ; 
}

double sum(double a , double b){
    return a + b ; 
}
int main(){
    cout << sum(4.6 , 5.5 ) << endl;
    system("pause");
    return 0;
}