#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public: 
    int num ; 
    string name ; 
    // MyClass( int a , string n){
    //     num = a ; 
    //     name = n ; 
    // }

    MyClass(int a , string n) ;
    MyClass(string n);
   void myMethod(int num);
   void myMethod(double num);
};

void MyClass::myMethod(int num ){
    cout << num << endl ; 
}
void MyClass::myMethod(double num ){
    cout << num << endl ; 
}

MyClass::MyClass(int a , string n){
    num = a ; 
    name = n ; 
}
MyClass::MyClass(string n){
    name = n ; 
}

int main(){
    // MyClass c1( 15 ,  "Ahmed"); 
    MyClass c1("Ahmed"); 
    // MyClass c2 ; 
    // c1.num = 15 ; 
    // c1.name = "Ahmed";
    // c2.name = "Ali";  
    cout << c1.num << endl;
    cout << c1.name << endl; 
    // cout << c2.name << endl; 
    c1.myMethod(5.5);
    system("pause");
    return 0;
}