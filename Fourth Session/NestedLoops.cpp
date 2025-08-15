#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of Multiplication table \n";
    int table ; 
    cin >> table ; 
  
        for(int j = 1 ; j <=12 ; j++){
            cout << table * j << "\n";
        }
    // 1 
    // 2
    // 3
    // 4
    // 5
    // ..
    // 12
    system("pause");
    return 0;
}