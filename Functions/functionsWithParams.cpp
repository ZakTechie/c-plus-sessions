#include <iostream>
using namespace std;

// void myfunc(string fname , string lname);

// void myFunction(string name , string country = "Egypt" ){
//     cout << name << "\t" << country << endl ; 
// }

void myFunction(string name , string country);



int main(){
    // myfunc("Ahmed" , "Ali");
    myFunction("Ahmed" , "USA");
    system("pause");
    return 0;
}

// void myfunc(string fname , string lname){
//     cout << "Hello " <<  fname << " " << lname << endl ; 
// }


// Implementation 
void myFunction(string name , string country = "Egypt" ){
    cout << name << "\t" << country << endl ; 
}