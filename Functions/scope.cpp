#include <iostream>
using namespace std;

int n = 10; // Global scope
void myfunction(){
    // int n = 5 ; 
    cout << ++n << endl ; // 11
}
int main(){
    myfunction();
    cout << n << endl ; // 11
    system("pause");
    return 0;
}