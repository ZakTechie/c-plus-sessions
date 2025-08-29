#include <iostream>
using namespace std;


// Public 
// Private 
// Protected

class Employee{
    private:
    int salary ;

    public:
    Employee(int salary){
        this->salary = salary ; 
    }

    friend void displaySalary(Employee emp){
        cout << "Salary "<< emp.salary ;  
    }
};

int main(){
    Employee myemp(5000) ; 
    // emp.setSalary(57878);
    // cout << emp.getSalary()<< endl;
    displaySalary(myemp);
    cin.get(); 
    return 0;
}