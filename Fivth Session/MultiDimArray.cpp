#include <iostream>
#include <vector>
using namespace std;

struct car{
    string brand ; 
    string model ; 
    int year ; 
};

enum Level {
    LOW  ,  
    MEDIUM , 
    HIGH
};

int main(){
    // // create Structure 
    // struct {
    //     string name ; 
    //     int age ;
    //     bool success;
    // } student , student2 , student3  ; 

    // student.name = "Mostafa" ; 
    // student.age = 18 ; 
    // student.success = true ;
 
    // student2.name = "Ahmed" ; 
    // student3.age = 30 ; 

    // cout << student.name << "\n" ; 
    //cout << student3.age << endl; 
    // cout << student2.name << endl; 
    // cout << student.success << "\n";
    // car c1 ; 
    // c1.brand = "BMW" ; 
    // c1.model = "x5";
    // c1.year = 1999 ; 

    // car c2 ;
    // c2.brand = "Ford" ;

    // enum Level myVar = MEDIUM ; 
    // cout << myVar << endl ; 
    
    enum Level v ; 
    v = MEDIUM ; 
    switch (v)
    {
    case 0:
        cout << "Low Level" ; 
        break;
    case 1 : 
        cout<< "Medium Level" ;
        break;
    case 2:
        cout << "High Level" ; 
        break;
    default:
        cout << "default" ; 
    }
    cout << endl; 
    system("pause");
    return 0;
}