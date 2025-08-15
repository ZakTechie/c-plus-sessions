#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // Fixed Size 
    // string names[3] = {"volvo" , "ford" , "NA"};
    // names[2] = "BMW" ; 
    // for(string n : names){
    //     cout << n << endl ; 
    // }

    // for(int i = 0 ; i < 3 ; i++){
    //       cout << names[i] << endl ;
    // }

    // string names[] = {"volvo" , "Ford" , "Bmw"} ; 
    // cout << names[2] <<endl;
    
    // string names[3] ; 
    // names[0] = "Volvo";
    // names[1] = "BMW" ; 
    // names[2] = "Ford" ; 
    // cout << names[1] ; 

    // string names[3] = {"volvo" , "Ford" , "Bmw"} ;
    // names[3] = "Marsedes"; // wrong out of range index
    
    // dynamic size 
    // vector<string> names = {"volvo" , "Ford" , "Bmw"} ;
    // names.push_back("Tesla");
    //  for(string n : names){
    //     cout << n << endl ; 
    // }
    string name ="Ahmed" ; 
    // cout << name.length();

    string names[3] = {"volvo" , "Ford" , "Bmw"} ;

    // cout << sizeof(names) / sizeof(names[0]) << endl;
    for(int i = 0 ; i < sizeof(names) / sizeof(names[1]) ; i++){
        cout << names[i] << endl;
    }
    system("pause");
    return 0;
}