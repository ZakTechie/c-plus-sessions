#include <iostream>
using namespace std;

int main(){
    string food = "Pizza" ; 
    string &meal = food ; 
    // meal = "Burger" ; 
    // cout << &food << endl; // Burger
    // cout << &meal << endl ;  // M: Burger M :Pizza 

    // Create pointer 
    string* ptr = &food ; 
    // Dereferencing 
    // cout << *ptr << endl ; 
    *ptr = "Humburger" ; 
    cout << food << endl; 
    system("pause");
    return 0;
}