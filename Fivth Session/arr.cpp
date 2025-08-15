#include <iostream>
using namespace std;

int main(){
    string n ; 
    int num ; 
    cout << "Enter length of array: ";
    cin >> num ;
    string names[num] ; 

    for(int i = 0 ; i < num ; i++){
        cout << "Enter name: ";
        cin >> n ; 
        names[i] = n ; 
    }
    // string names[] = {"Ahmed" , "Ali" , "Mostafa"};
    // for(int i = 0 ; i < sizeof(names) / sizeof(names[0]) ; i++){
    //     if(names[i] == "Mostafa"){
    //         names[i] = "" ; 
    //     }
    // }

    for(int i = 0 ; i < num ; i++){
        cout << names[i] << endl; 
    }
    
    system("pause");
    return 0;
}