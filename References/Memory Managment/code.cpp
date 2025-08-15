#include <iostream>
using namespace std;

int main(){
    // // int num = 10 ; 
    // // bool n = true ; 
    // // cout << sizeof(n)<< endl;

    // int* ptr = new int ;
    // *ptr = 40 ; 
    // cout << *ptr ; 
    // // delete ptr ; 

    int numGuests ; 
    cout << "How many guests? " ;
    cin >> numGuests ; 

    // create memory space 
    string* guests = new string[numGuests] ; 
    cin.ignore();
    for(int i = 0 ; i <numGuests ; i++){
        cout << "Enter name for guest "<< i+1 <<": "; 
        getline(cin , guests[i]);
    }
    string names[] = g
    // for(const auto &n : guests){
    //     cout
    // }

    // for(int i = 0 ; i < numGuests ; i++){
    //     cout << guests[i] << "\n";
    // }
    delete[] guests ; 
    system("pause");
    return 0;
}