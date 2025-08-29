#include <iostream>
using namespace std;

// class First{
//     public:
//     void print(){
//         cout << "Hello"<< endl ; 
//     }
// };

// class Second : public First{
//     public:
//     void print2();
// };

// void Second::print2(){
//     cout << "Hello2" << "\n" ;
// }
// class Third : public Second{

// };


// Multiple Inhertance 

// class Myclass{
//     public:
//     void myfunction(){
//         cout << "Some content in parent class" << endl ; 
//     }
// };

// class MyOtherClass{
//     public:
//     void myOtherFunction(){
//         cout << "Some content in another class"<< endl ; 
//     }
// };

// class MyChildClassn : public Myclass , public MyOtherClass{

// };

class Employee{
    protected:
    int salary ; 
};

class Programmer : public Employee{
    public:
    int bonus ;     
    void setSalary(int s){
        salary = s ; 
    }

    int getSalary(){
        return salary; 
    }
};
int main(){
    // Third t ; 
    // t.print();
    // MyChildClassn c ; 
    // c.myfunction();
    Programmer obj ; 
    obj.setSalary(15000);
    cout << obj.getSalary()<< endl ; 
    cin.get();
    return 0;
}